#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> g(n);
        ll sum = 0, mn = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            cin >> g[i];
            sum += g[i];
            mn = min(mn, g[i]);
        }

        cout << (sum - mn) << "\n";
    }
    return 0;
}
