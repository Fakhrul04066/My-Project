#include <bits/stdc++.h>
using namespace std;

#define int long long

int countPairs(vector<int> &a, int limit)
{
    int l = 0, r = a.size() - 1;
    int cnt = 0;

    while (l < r)
    {
        if (a[l] + a[r] <= limit)
        {
            cnt += r - l;
            l++;
        }
        else
        {
            r--;
        }
    }

    return cnt;
}

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin(), a.end());

    int R = sum - x;
    int L = sum - y;

    cout << countPairs(a, R) - countPairs(a, L - 1) << '\n';
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
    return 0;
}