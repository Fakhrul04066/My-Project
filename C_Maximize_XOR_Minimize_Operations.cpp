#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll x, y;
    cin >> x >> y;

    ll s = x + y;
    ll a = 0;

    for (int i = 28; i >= 0; i--)
    {
        ll bit = 1LL << i;

        if ((s & bit) && (a | bit) <= x)
            a |= bit;
    }

    cout << s << ' ' << x - a << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int qrTNum;
    cin >> qrTNum;

    while (qrTNum--)
        solve();

    return 0;
}