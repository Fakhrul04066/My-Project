#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

int solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int r = (c - 1) / b + 1;

    int ans = min(r, a - r + 1);

    cout << ans << endl;

    return 0;
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