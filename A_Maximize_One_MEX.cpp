#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    auto getMex = [&](vector<int> &a)
    {
        vector<int> f(n);
        vector<int> seen(n + 1, 0);
        int cur = 0;

        for (int i = 0; i < n; i++)
        {
            seen[a[i]] = 1;

            while (seen[cur])
                cur++;

            f[i] = cur;
        }

        return f[n - k];
    };

    int best = getMex(a);
    int x = -1, y = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(a[i], a[j]);

            int val = getMex(a);

            if (val > best)
            {
                best = val;
                x = i + 1;
                y = j + 1;
            }

            swap(a[i], a[j]);
        }
    }

    if (x == -1)
        cout << -1 << endl;
    else
        cout << x << " " << y << endl;
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