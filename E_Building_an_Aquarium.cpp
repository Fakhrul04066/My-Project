#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int low = 1;
    int high = *max_element(a.begin(),a.end())+x;
    int ans = 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long water = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < mid)
                water += mid - a[i];
        }

        if (water <= x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
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