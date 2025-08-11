#include <bits/stdc++.h>
using namespace std;
int countSpPri(int n) {
    vector<bool> isPrime(n + 3, true); 
    isPrime[0] = isPrime[1] = false;   

    for (int i = 2; i * i <= n + 2; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n + 2; j += i) {
                isPrime[j] = false;
            }
        }
    }
    int count = 0;
    for (int p = 2; p <= n; p++) {
        if (isPrime[p] && isPrime[p + 2]) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countSpPri(n) << endl;
    return 0;
}