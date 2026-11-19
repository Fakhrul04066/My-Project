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
    vector<int> freq(101, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 100; j >= 1; j--)
        {
            if (freq[j] >= i)
            {
                cout << j << " ";
            }
        }
    }

    cout << endl;
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