#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    ll x, y;
    cin >> x >> y;

    ll ans = LLONG_MAX;

    for (ll k = 1; k <= 1000; k++)
    {
        ll rev = 0;

        for (ll d = 1; d <= k; d++)
        {
            rev += y * d * d;

            if (rev > k * x)
            {
                ans = min(ans, d);
                break;
            }
        }

        if (rev <= k * x)
        {
            ll c = k * x;
            ll da = y * k * k;

            ll ex = (c - rev) / da + 1;

            ans = min(ans, k + ex);
        }
    }

    cout << ans << endl;
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