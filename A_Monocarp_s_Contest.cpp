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

    int z = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == 0)
            z++;
    }

    if (z < 2)
        cout << -1 << endl;
    else if (a[0] == 0 && a[n - 1] == 0)
        cout << 0 << endl;
    else if (a[0] == 1 && a[n - 1] == 1)
        cout << 2 << endl;
    else
        cout << 1 << endl;
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