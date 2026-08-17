#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int m = 0;

    for (int &x : a)
    {
        cin >> x;
        m = max(m, x);
    }

    vector<int> d(m + 1);

    for (int i = 1; i <= m; i++)
        for (int j = i; j <= m; j += i)
            d[j]++;

    vector<ll> dp(m + 1);
    ll ans = 0;

    for (int x : a)
    {
        ll b = 0;

        if (x > 1)
            b = max(b, dp[x - 1]);
        if (x < m)
            b = max(b, dp[x + 1]);

        if (x % 2 == 0)
            b = max(b, dp[x / 2]);
        if (x % 3 == 0)
            b = max(b, dp[x / 3]);

        if (2 * x <= m)
            b = max(b, dp[2 * x]);
        if (3 * x <= m)
            b = max(b, dp[3 * x]);

        dp[x] = max(dp[x], b + d[x]);
        ans = max(ans, dp[x]);
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}