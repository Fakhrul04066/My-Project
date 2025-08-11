#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int op = 0, vL = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '<') {
                op++;
            } else if (s[i] == '>') {
                if (op > 0) {
                    op--;
                    if (op == 0) {
                        vL = i + 1; 
                    }
                } else {
                    break; 
                }
            }
        }

        cout << vL << endl;
    }
    return 0;
}