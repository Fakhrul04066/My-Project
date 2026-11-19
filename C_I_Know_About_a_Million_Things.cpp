#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;

    int od = 0, ev = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x % 2 == 0)
            ev++;
        else
            od++;
    }

    if ((od == 1 && ev == 1) ||
        (od == 3 && ev == 0))
    {
        cout << "Larpity\n";
    }
    else
    {
        cout << "Moggity\n";
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