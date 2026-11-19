#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

string solve() {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> pre(n), suf(n);

        pre[0] = a[0];

        for (int i = 1; i < n; i++) {
            pre[i] = min(pre[i - 1], a[i]);
        }

        suf[n - 1] = a[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suf[i] = max(suf[i + 1], a[i]);
        }

        string ans = "";

        for (int i = 0; i < n; i++) {
            if (a[i] == pre[i] || a[i] == suf[i]) {
                ans += '1';
            } else {
                ans += '0';
            }
        }

        return ans;
    }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
       cout<< solve()<<endl;

    return 0;
}