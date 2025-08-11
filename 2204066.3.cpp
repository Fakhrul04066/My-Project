#include <bits/stdc++.h>
using namespace std;
int firstOc(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid; 
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}
int scOc(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            low = mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}
int main() {
    int n, target;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> target;
    int first = firstOc(arr, target);
    int last = scOc(arr, target);

    if (first == -1) {
        cout << "Not Found" << endl;
    } else {
        cout << "First occurance at index " << first << endl;
        cout << "Last occurance at index " << last << endl;
    }

    return 0;
}