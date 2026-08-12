#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;

    if (z <= y)
    {
        cout << -1 << endl;
        return;
    }

    ll d = z - y;

    ll m = (x + d - 1) / d;

    cout <<m << endl;
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