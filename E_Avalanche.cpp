
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> b(n), dp(n);

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int sum = 0, ans = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        dp[i] = (b[i] % 2 + sum) % 2;

        ans = (ans + dp[i]) % 2;

        sum += dp[i];

        if (i + k < n)
        {
            sum -= dp[i + k];
        }
    }

    if (ans == 1)
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
