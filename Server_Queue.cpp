#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, m;
    ll c;
    cin >> n >> m >> c;

    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;

    auto ok = [&](int k)
    {
        if (k == n)
            return true;

        int s = 1;
        ll r = c;

        for (int i = k; i < n; i++)
        {
            if (a[i] > c)
                return false;

            if (a[i] <= r)
            {
                r -= a[i];
            }
            else
            {
                s++;
                r = c - a[i];
            }

            if (s > m)
                return false;
        }

        return true;
    };

    int l = 0, r = n;

    while (l < r)
    {
        int mid = (l + r) / 2;

        if (ok(mid))
            r = mid;
        else
            l = mid + 1;
    }

    cout << l << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}