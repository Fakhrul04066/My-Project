#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    vector<ll> pre(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        pre[i] = sum + d[i];
        sum += d[i];
    }
    ll le;
    int dom = 0;
    for (int i = 0; i < k; i++)
    {
        cin >> le;
        while (le > pre[dom])
        {
            dom++;
        }
        cout << dom + 1 << " ";
        if (dom > 0)
        {
            cout << le - pre[dom - 1] << endl;
        }
        else
        {
            cout << le << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--)
        solve();

    return 0;
}