#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    list<int> a;
    unordered_map<int, list<int>::iterator> pos;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
        pos[x] = prev(a.end());
    }
    int q;
    cin >> q;
    while (q--) {
        int ty;
        cin >> ty;
        if (ty == 1) {
            int x, y;
            cin >> x >> y;
            auto it = pos[x];
            pos[y] = a.insert(next(it), y);
        } else if (ty == 2) {
            int x;
            cin >> x;
            auto it = pos[x];
            a.erase(it);
            pos.erase(x);
        }
    }
    for (int x : a) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}