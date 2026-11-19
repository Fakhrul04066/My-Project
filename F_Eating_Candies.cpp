
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll suml = 0, sumr = 0;
    int ans = 0;
    int l = 0, r = n - 1;

    while (l <= r)
    {
        if (suml <= sumr)
        {
            suml += a[l];
            l++;
        }
        else
        {
            sumr += a[r];
            r--;
        }

        if (suml == sumr)
        {
            ans = l + (n -1- r);
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
