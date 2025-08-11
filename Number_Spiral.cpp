#include <bits/stdc++.h>
#define pb push_back
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll y, x;
        cin >> y >> x;
        ll z = max(x, y);
        ll ans;
        if (z % 2 == 0) {
            if (z == y) {
                ans = z * z - x + 1;
            } else {
                ans = (z - 1) * (z - 1) + y;
            }
        } else {
            if (z == x) {
                ans = z * z - y + 1;
            } else {
                ans = (z - 1) * (z - 1) + x;
            }
        }
        cout << ans << endl;
    }
}
