#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    ll p = min(k - 1, n - k + 1);
    for (int i = 0; i < p; i++)
    {
        ans += max(a[i], a[n - 1 - i]);
    }
    if (n >= 2 * k - 1)
    {
        for (int i = p; i < n - p; i++)
        {
            ans += a[i];
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