#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, x, s;
    cin >> n >> x >> s;

    string a;
    cin >> a;

    vector<int> dp(x + 1, -1e9);
    dp[x] = 0;

    for (int i = 0; i < n; i++)
    {
        vector<int> ndp(x + 1, -1e9);

        for (int e = 0; e <= x; e++)
        {
            if (dp[e] < 0)
                continue;

            int ans = dp[e];
            int fs = (x - e) * s - ans;

            if (a[i] == 'I')
            {
                ndp[e] = max(ndp[e], ans);

                if (e > 0)
                    ndp[e - 1] = max(ndp[e - 1], ans + 1);
            }
            else if (a[i] == 'E')
            {
                ndp[e] = max(ndp[e], ans + (fs > 0));
            }
            else
            {
                ndp[e] = max(ndp[e], ans + (fs > 0));

                if (e > 0)
                    ndp[e - 1] = max(ndp[e - 1], ans + 1);
            }
        }

        dp = ndp;
    }

    cout << *max_element(dp.begin(), dp.end()) << endl;
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