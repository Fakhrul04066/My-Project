#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vector<bool> dp(360, false);
    dp[0] = true;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vector<bool> next(360, false);
        for (int r = 0; r < 360; r++)
        {
            if (!dp[r])
                continue;

            next[(r + x) % 360] = true;
            next[(r - x + 360) % 360] = true;
        }

        dp = next;
    }

    cout << (dp[0] ? "YES" : "NO") << '\n';

    return ;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;

    while (t--)
        solve();

    return 0;
}