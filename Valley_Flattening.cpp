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
    vector<int> b(n, 0);

    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] < a[i - 1] && a[i] < a[i + 1])
        {
            b[i] = 1;
        }
    }

    vector<int> res(n);
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        res[i] = a[i];
        if (i > 0 && b[i - 1] == 1)
        {
            res[i] = min(res[i], a[i - 1]);
        }
        if (i + 1 < n && b[i + 1] == 1)
        {
            res[i] = min(res[i], a[i + 1]);
        }

        sum += res[i];
    }

    cout << sum << endl;
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