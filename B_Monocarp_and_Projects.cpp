#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;

    ll d = y - x;
    ll ans = 0;

    ll limit = 0;

    if (x <= d)
        limit = min(k, d - x + 1);

    for (ll i = 0; i < limit; i++)
    {
        ans += d % (x + i);
    }

    if (k > limit)
    {
        ans += (k - limit) * d;
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