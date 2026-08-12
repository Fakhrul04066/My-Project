#include <bits/stdc++.h>
using namespace std;
bool isSubsetSum(vector<int>& arr, int n, int sum) {
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (arr[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
        }
    }
    return dp[n][sum];
}
int main() {
    int N, sum;
    cin >> N;
    cin.ignore(); 
    string line;
    getline(cin, line);
    vector<int> arr;
    stringstream ss(line);
    string num;
    while (getline(ss, num, ',')) {
        stringstream numstream(num);
        int val;
        numstream >> val;
        arr.push_back(val);
    }
    cin >> sum;
    if (isSubsetSum(arr, N, sum))
        cout << "1\n";
    else
        cout << "0\n";
    return 0;
}