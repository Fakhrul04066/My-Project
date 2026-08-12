#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int zeros = 0;
    int keep = 0;

    for (char c : s)
    {
        if (c == '0')
        {
            zeros++;
        }
        else
        {
            keep = max(keep, zeros + 1);
        }
    }

    cout << s.size() - keep << '\n';
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