
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

int cal(int k)
{
    int sum = 0;
    while (k > 0)
    {
        int d = k % 10;
        sum += d * d;
        k /= 10;
    }
    return sum;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[j] = cal(a[j]);
        }
    }
    map<int, int> mp;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += mp[a[i]];
        mp[a[i]]++;
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
