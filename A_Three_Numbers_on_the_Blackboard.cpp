#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    array<ll, 3> v;
    cin >> v[0] >> v[1] >> v[2];

    sort(v.begin(), v.end());

    ll ans = min(v[2] - v[0], v[1]);
    cout << ans << '\n';
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