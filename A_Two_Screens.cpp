#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;

    if (s[0] != t[0])
    {
        cout << s.size() + t.size() << '\n';
        return;
    }

    int ans = 2;
    bool mismatch = false;

    for (int i = 1; i < min(s.size(), t.size()); i++)
    {
        if (s[i] == t[i])
        {
            ans++;
        }
        else
        {
            ans += s.size() - i;
            ans += t.size() - i;
            mismatch = true;
            break;
        }
    }

    if (!mismatch)
    {
        ans += abs((int)s.size() - (int)t.size());
    }

    cout << ans << '\n';
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}