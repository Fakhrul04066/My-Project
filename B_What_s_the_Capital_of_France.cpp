#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;

    int mn = INT_MAX;
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        mn = min(mn, x);
        mx = max(mx, x);
    }

    int di = mn ^ mx;
    int ma = 0;

    while (di > 0)
    {
        ma = (ma << 1) | 1;
        di >>= 1;
    }

    cout << (mx | ma) << '\n';
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
