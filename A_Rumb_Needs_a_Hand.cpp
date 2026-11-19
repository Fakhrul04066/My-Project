#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    vector<int> bad;

    for (int i = 0; i < n; i++)
    {
        if (p[i] != i + 1)
        {
            bad.push_back(i);
        }
    }

    int m = bad.size();

    for (int i = 0; i < m; i++)
    {
        if (p[bad[i]] != bad[m - 1 - i] + 1)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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