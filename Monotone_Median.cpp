#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int k = (n + 1) / 2;

    int l = 1;
    int r = n;

    vector<pair<int, int>> ans;

    ans.push_back({l, r});

    for (int m = k; m >= 2; m--)
    {
        int need = m - 1;

        if (a[l] > need && a[l + 1] > need)
        {
            l += 2;
        }
        else if (a[r] > need && a[r - 1] > need)
        {
            r -= 2;
        }
        else if (a[l] > need && a[r] > need)
        {
            l++;
            r--;
        }
        else
        {
            cout << -1 << endl;
            return;
        }

        ans.push_back({l, r});
    }

    reverse(all(ans));

    for (auto p : ans)
    {
        cout << p.first << " " << p.second << endl;
    }
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