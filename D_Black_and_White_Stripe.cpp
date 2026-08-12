#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = k;
    int l = 0, r = 0;
    int cnt = 0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'W')
        {
            cnt++;
        }
        r++;
    }
    ans = min(ans, cnt);
    for (int i = k; i < n; i++)
    {
        if (s[l] == 'W')
        {
            cnt--;
        }
        if (s[i] == 'W')
        {
            cnt++;
        }
        r++;
        l++;
        ans = min(ans, cnt);
    }

    cout << ans << endl;
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