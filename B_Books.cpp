#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum=0;
    int l=0;
    int ans=0;
    for (int r = 0; r < n; r++)
    {
        sum += a[r];

        while (sum > t)
        {
            sum -= a[l];
            l++;
        }

        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;
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