#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
        int N;
        cin >> N;

        int total = 0;
        int odd = 0;

        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;

            total += x;

            if (x % 2 == 1)
                odd++;
        }

        if (total % 2 == 0)
            cout << total - odd / 2 << endl;
        else
            cout << (odd - 1) / 2 << endl;
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