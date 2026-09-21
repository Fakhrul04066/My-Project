#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n;
    ll k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0;
    ll sum = 0;
    ll mx = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        mx = max(mx, (ll)a[i]);
        if (sum - mx <= k)
        {
            ans++;
        }
        else
        {
            break;
        }
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