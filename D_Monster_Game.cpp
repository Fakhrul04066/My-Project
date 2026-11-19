#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a.rbegin(), a.rend());

    ll ans = 0;
    ll sum = 0;
    int h = 0;

    for (int i = 0; i < n; i++)
    {
        while (h < n && sum + b[h] <= i + 1)
        {
            sum += b[h];
            h++;
        }

        ans = max(ans, a[i] * h);
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