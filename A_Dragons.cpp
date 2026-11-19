#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons(n);

    for (int i = 0; i < n; i++) {
        cin >> dragons[i].first >> dragons[i].second;
    }

    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < n; i++) {
        if (s <= dragons[i].first) {
            cout << "NO" << endl;
            return;
        }

        s += dragons[i].second;
    }

    cout << "YES" << endl;
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