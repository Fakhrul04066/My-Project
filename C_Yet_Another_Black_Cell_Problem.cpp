#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int &v : a)
        cin >> v;

    auto check = [&](int k)
    {
        vector<int> dp(n + 1, 1e9);
        dp[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            dp[i] = dp[i - 1] + 1;

            if (i >= 2)
            {
                int d = a[i - 1] - a[i - 2];

                if (d <= k)
                {
                    dp[i] = min(dp[i], dp[i - 2]);
                    dp[i] = min(dp[i], dp[i - 1]);
                }
                else if (d <= 2LL * k)
                {
                    dp[i] = min(dp[i], dp[i - 2] + 1);
                }
            }
        }

        return dp[n] <= x;
    };

    int l = 1, r = 1e9, ans = r;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (check(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}