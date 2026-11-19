#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define endl '\n'

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> sum;

    for (ll i = 0; i < n - 4; i++)
    {
        sum.pb(a[i] + a[i + 2] - a[i + 4]);
    }
    unordered_map<ll, ll> mp;
    for (ll x : sum)
    {
        mp[x]++;
    }

    ll ans = 0;

    for (auto x : mp)
    {
        ll cnt = x.second;

        ans += cnt * (cnt - 1) / 2;
    }

    for (ll i = 0; i < sum.size(); i++)
    {

        if (i + 2 < sum.size() && sum[i] == sum[i + 2])
        {
            ans--;
        }

        if (i + 4 < sum.size() && sum[i] == sum[i + 4])
        {
            ans--;
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
    {
        solve();
    }

    return 0;
}