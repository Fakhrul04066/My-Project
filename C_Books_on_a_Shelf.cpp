
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(all(a));

    int ans = 0;
    vector<int> l, r;

    for (int i = 0; i < n;)
    {
        int j = upper_bound(all(a), a[i]) - a.begin();
        int cnt = j - i;

        ans += min(2, cnt);

        l.push_back(a[i]);

        for (int k = 1; k < cnt; k++)
        {
            r.push_back(a[i]);
        }

        i = j;
    }

    reverse(all(r));

    cout << ans << endl;

    for (int x : l)
        cout << x << " ";
    for (int x : r)
        cout << x << " ";

    cout << endl;
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
