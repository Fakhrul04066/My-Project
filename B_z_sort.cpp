#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void zSort(vector<int>& arr, int n) {
    sort(arr.begin(), arr.end());
    vector<int> result(n);
    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result[i] = arr[left++];
        } else {
            result[i] = arr[right--];
        }
    }
    
    for (int i = 2; i < n; i += 2) {
        if (result[i] < result[i - 1]) {
            cout << "Impossible" << endl;
            return;
        }
    }
    for (int i = 3; i < n; i += 2) {
        if (result[i] > result[i - 1]) {
            cout << "Impossible" << endl;
            return;
        }
    }
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    zSort(arr, n);
    
    return 0;
}
