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
    {
        cin >> a[i];
    }

    int cur = a[k - 1];

    sort(all(a));

    int prev = cur;
    bool poss = true;

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= cur)
            continue;

        if (a[i] - prev > cur)
        {
            poss = false;
            break;
        }

        prev = a[i];
    }

    cout << (poss ? "YES" : "NO") << endl;
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