#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, m;
    cin >> n >> m;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int k = (n + 1) / 2;

    cout << k << endl;

    for (int i = 1; i <= k; i++)
    {
        int l = i;
        int r = min(n, i + k - 1);

        cout << l << " " << r << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}