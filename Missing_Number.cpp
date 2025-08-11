#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n - 1; i++) {
        ll x;
        cin >> x;
        sum += x;
    }
    ll total = n * (n + 1) / 2;
    cout << total - sum << endl;
    return 0;
}
