#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0;

    for (int p = 2; p <= x; p++)
    {
        if (x % p == 0)
        {
            ll sum = 0;

            for (int i = 0; i < n; i++)
            {
                if (a[i] % p == 0)
                    sum += a[i];
            }

            ans = max(ans, sum);

            while (x % p == 0)
                x /= p;
        }
    }

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