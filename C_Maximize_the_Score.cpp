#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(2 * n);
    for (int &x : a)
        cin >> x;
    ll sum = 0;
   int l = 0;
   while (l < 2 * n)
    {
        auto it = find(a.begin() + l + 1, a.end(), a[l]);
        if (it == a.end())
        {
            sum++;
            l++;
        }
        else
        {
            int r = it - a.begin();
            ll length = r - l + 1;
            sum += length * length;
            l=r + 1;
        }
    }

    cout << sum << '\n';
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