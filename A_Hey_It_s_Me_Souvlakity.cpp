
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

    int fi = -1, se = -1;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (cnt == 0)
                fi = i;

            se = i;
            cnt++;
        }
    }

    if (cnt == 1)
        cout << 0 << endl;
    else if (cnt == 2)
        cout << 1 << endl;
    else
        cout << se - fi << endl;
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
