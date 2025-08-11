#include<iostream>
#include<climits>
using namespace std;
int *a;
int n;
int maxSum = INT_MIN, minSum = INT_MAX;
int maxStart = 0, maxEnd = 0, minStart = 0, minEnd = 0;
void print(int st, int ed) {
    if (ed == n) return;
    int sum = 0;
    for (int i = st; i <= ed; i++) {
        sum += a[i];
    }
    if (sum > maxSum) {
        maxSum = sum;
        maxStart = st;
        maxEnd = ed;
    }
    if (sum < minSum) {
        minSum = sum;
        minStart = st;
        minEnd = ed;
    }
    print(st, ed + 1);
}
void subA(int st) {
    if (st == n) return;
    print(st, st);
    subA(st + 1);
}
int main() {
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    subA(0);
    cout << "Max Sum: " << maxSum << endl;
    cout << "Subarray: ";
    for (int i = maxStart; i <= maxEnd; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Min Sum: " << minSum << endl;
    cout << "Subarray: ";
    for (int i = minStart; i <= minEnd; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}