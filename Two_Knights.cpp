#include <bits/stdc++.h>
#define pb push_back
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    for (ll k = 1; k <= n; ++k) {
        ll total = k * k;
        ll ways = (total * (total - 1)) / 2;
        ll attacking = 0;
        if (k > 2) {
            attacking = 4 * (k - 1) * (k - 2);
        }
        cout << (ways - attacking) << endl;
    }
    return 0;
}
