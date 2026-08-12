#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

void printResult(const string &algo, const vector<int> &sequence, int totalMovement) {
    cout << "\n" << algo << " Disk Scheduling\n";
    cout << "Seek Sequence: ";
    for (int track : sequence) {
        cout << track << " ";
    }
    cout << "\nTotal Head Movement: " << totalMovement << endl;
}

void FCFS(vector<int> requests, int head) {
    vector<int> sequence;
    int totalMovement = 0;
    int current = head;

    for (int req : requests) {
        sequence.push_back(req);
        totalMovement += abs(req - current);
        current = req;
    }

    printResult("FCFS", sequence, totalMovement);
}

void SSTF(vector<int> requests, int head) {
    vector<int> sequence;
    vector<bool> visited(requests.size(), false);

    int totalMovement = 0;
    int current = head;

    for (int i = 0; i < requests.size(); i++) {
        int minDistance = INT_MAX;
        int index = -1;

        for (int j = 0; j < requests.size(); j++) {
            if (!visited[j]) {
                int distance = abs(requests[j] - current);
                if (distance < minDistance) {
                    minDistance = distance;
                    index = j;
                }
            }
        }

        visited[index] = true;
        sequence.push_back(requests[index]);
        totalMovement += abs(requests[index] - current);
        current = requests[index];
    }

    printResult("SSTF", sequence, totalMovement);
}

void SCAN(vector<int> requests, int head, int diskSize, string direction) {
    vector<int> sequence;
    vector<int> left, right;

    int totalMovement = 0;
    int current = head;

    for (int req : requests) {
        if (req < head)
            left.push_back(req);
        else
            right.push_back(req);
    }

    left.push_back(0);
    right.push_back(diskSize - 1);

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    if (direction == "right") {
        for (int req : right) {
            sequence.push_back(req);
            totalMovement += abs(req - current);
            current = req;
        }

        for (int i = left.size() - 1; i >= 0; i--) {
            sequence.push_back(left[i]);
            totalMovement += abs(left[i] - current);
            current = left[i];
        }
    } else {
        for (int i = left.size() - 1; i >= 0; i--) {
            sequence.push_back(left[i]);
            totalMovement += abs(left[i] - current);
            current = left[i];
        }

        for (int req : right) {
            sequence.push_back(req);
            totalMovement += abs(req - current);
            current = req;
        }
    }

    printResult("SCAN", sequence, totalMovement);
}

void CSCAN(vector<int> requests, int head, int diskSize) {
    vector<int> sequence;
    vector<int> left, right;

    int totalMovement = 0;
    int current = head;

    for (int req : requests) {
        if (req < head)
            left.push_back(req);
        else
            right.push_back(req);
    }

    left.push_back(0);
    right.push_back(diskSize - 1);

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    for (int req : right) {
        sequence.push_back(req);
        totalMovement += abs(req - current);
        current = req;
    }

    totalMovement += abs((diskSize - 1) - 0);
    current = 0;

    for (int req : left) {
        sequence.push_back(req);
        totalMovement += abs(req - current);
        current = req;
    }

    printResult("C-SCAN", sequence, totalMovement);
}

void LOOK(vector<int> requests, int head, string direction) {
    vector<int> sequence;
    vector<int> left, right;

    int totalMovement = 0;
    int current = head;

    for (int req : requests) {
        if (req < head)
            left.push_back(req);
        else
            right.push_back(req);
    }

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    if (direction == "right") {
        for (int req : right) {
            sequence.push_back(req);
            totalMovement += abs(req - current);
            current = req;
        }

        for (int i = left.size() - 1; i >= 0; i--) {
            sequence.push_back(left[i]);
            totalMovement += abs(left[i] - current);
            current = left[i];
        }
    } else {
        for (int i = left.size() - 1; i >= 0; i--) {
            sequence.push_back(left[i]);
            totalMovement += abs(left[i] - current);
            current = left[i];
        }

        for (int req : right) {
            sequence.push_back(req);
            totalMovement += abs(req - current);
            current = req;
        }
    }

    printResult("LOOK", sequence, totalMovement);
}

void CLOOK(vector<int> requests, int head) {
    vector<int> sequence;
    vector<int> left, right;

    int totalMovement = 0;
    int current = head;

    for (int req : requests) {
        if (req < head)
            left.push_back(req);
        else
            right.push_back(req);
    }

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    for (int req : right) {
        sequence.push_back(req);
        totalMovement += abs(req - current);
        current = req;
    }

    if (!left.empty()) {
        totalMovement += abs(current - left[0]);
        current = left[0];

        for (int req : left) {
            sequence.push_back(req);
            if (req != left[0]) {
                totalMovement += abs(req - current);
                current = req;
            }
        }
    }

    printResult("C-LOOK", sequence, totalMovement);
}

int main() {
    int n, head, diskSize;
    string direction;

    cout << "Enter number of disk requests: ";
    cin >> n;

    vector<int> requests(n);

    cout << "Enter disk requests: ";
    for (int i = 0; i < n; i++) {
        cin >> requests[i];
    }

    cout << "Enter initial head position: ";
    cin >> head;

    cout << "Enter disk size: ";
    cin >> diskSize;

    cout << "Enter direction for SCAN and LOOK left/right: ";
    cin >> direction;

    FCFS(requests, head);
    SSTF(requests, head);
    SCAN(requests, head, diskSize, direction);
    CSCAN(requests, head, diskSize);
    LOOK(requests, head, direction);
    CLOOK(requests, head);

    return 0;
}