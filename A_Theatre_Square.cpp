#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, m, a;
    cin >> n >> m >> a;
    ll x = (n + a - 1) / a;  
    ll y = (m + a - 1) / a;  
    cout << x * y << endl;
    return 0;
}
