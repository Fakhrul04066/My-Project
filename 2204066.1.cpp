#include<bits/stdc++.h>
using namespace std;
int factorialMod(int n, int m) {
    if (m == 1) return 0; 
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = (result * i) % m;
        if (result == 0) break; 
    }
    return result;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << factorialMod(n, m) << endl;
    return 0;
}