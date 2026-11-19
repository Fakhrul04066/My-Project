
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    ll ans = 0;

    if (s[0] == 'B')
    {
        ans++;
    }

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            ans++;
        }
    }

    cout << ans << endl;
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
