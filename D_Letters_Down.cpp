
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

    int v[26] = {0};

    for (int i = 0; i < n / 2; i++)
    {
        int a = min(s[i], s[n - i - 1]) - 'a';
        int b = max(s[i], s[n - i - 1]) - 'a';

        for (int j = a + 1; j <= b; j++)
        {
            v[j] = 1;
        }
    }

    int ans = 0;

    for (int i = 1; i < 26; i++)
    {
        ans += v[i];
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
