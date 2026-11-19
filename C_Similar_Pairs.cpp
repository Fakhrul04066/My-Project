
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    int even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] % 2 != 0)
            odd++;
        else
            even++;
    }

    if (even % 2 == 0 && odd % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }

    sort(all(a));

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] == 1)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
