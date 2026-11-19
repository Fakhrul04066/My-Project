#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int x = count(a.begin(), a.end(), 'f');
    int y = count(b.begin(), b.end(), 'f');

    if (x == y)
    {
        cout << 0 << endl;
        return;
    }

    string s = (x > y ? a : b);
    int d = abs(x - y), p = 0;

    for (int i = 0; i + 1 < n;)
    {
        if (s[i] == 'f' && s[i + 1] == 'f')
            p++, i += 2;
        else
            i++;
    }

    cout << d - 2 * min(p, d / 2) << endl;
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