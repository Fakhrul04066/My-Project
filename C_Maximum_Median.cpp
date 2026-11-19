#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);
    for (auto &x : a)
        cin >> x;

    sort(a.begin(), a.end());

    int mid = n / 2;
    long long l = a[mid], r = a[mid] + k, ans = l;

    while (l <= r)
    {
        long long m = l + (r - l) / 2;
        long long cost = 0;

        for (int i = mid; i < n; i++)
        {
            cost += max(0LL, m - a[i]);
        }

        if (cost <= k)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--)
        solve();

    return 0;
}