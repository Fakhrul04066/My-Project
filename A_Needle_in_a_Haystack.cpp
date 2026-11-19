#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    string s, t;
    cin >> s >> t;

    vector<int> cnt(26, 0);

    for (char c : t)
        cnt[c - 'a']++;

    for (char c : s)
    {
        if (--cnt[c - 'a'] < 0)
        {
            cout << "Impossible\n";
            return;
        }
    }

    string ans = "";
    int j = 0;

    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;

        while (j < (int)s.size() && s[j] <= c)
        {
            ans += s[j++];
        }

        ans += string(cnt[i], c);
    }

    ans += s.substr(j);
    cout << ans << '\n';
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