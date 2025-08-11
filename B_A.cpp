#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main() {
    string s, a;
    cin >> a;
    for (int i =a.size(); i>=0; i--) {
        s.pb(a[i]); // Correct usage of push_back
    }
    cout << s;
    return 0;
}
