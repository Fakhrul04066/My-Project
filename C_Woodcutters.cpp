#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    int ans = 0;
    int last = LLONG_MIN;

    for (int i = 0; i < n; i++)
    {
        int x = a[i].first;
        int h = a[i].second;

        if (i == 0 || x - h > last)
        {
            ans++;
            last = x;
        }
        else if (i == n - 1 || x + h < a[i + 1].first)
        {
            ans++;
            last = x + h;
        }
        else
        {
            last = x;
        }
    }

    cout << ans << '\n';
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