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
    vector<int> acc(n);
    acc[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        acc[i] = acc[i - 1] + a[i];
    }
    int m;
    cin >> m;
    vector<int> w(m);
    for (int i = 0; i < m; i++)
    {
        cin >> w[i];
    }
    for (int i = 0; i < m; i++)
    {
        int idx = lower_bound(all(acc), w[i]) - acc.begin();
        cout << idx + 1 << endl;
    }
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