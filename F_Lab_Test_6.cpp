#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int BASE = 31;
const int MAXN = 10005;
int p[MAXN], h[MAXN];
void build_hash(const string &s) {
    int n = s.size();
    p[0] = 1;
    h[0] = s[0] - 'A' + 1;
    for (int i = 1; i < n; i++) {
        p[i] = (p[i - 1] * BASE) % MOD;
        h[i] = (h[i - 1] * BASE + (s[i] - 'A' + 1)) % MOD;
    }
}
int get_hash(int l, int r) {
    if (l == 0) return h[r];
    return ((h[r] - h[l - 1] * p[r - l + 1]) % MOD + MOD) % MOD;
}
vector<pair<int, int>> get_palindromic_substrings(const string &s) {
    int n = s.size();
    vector<pair<int, int>> palins;
    for (int center = 0; center < n; ++center) {
        int l = center, r = center;
        while (l >= 0 && r < n && s[l] == s[r]) {
            palins.emplace_back(l, r);
            --l;
            ++r;
        }
    }
    for (int center = 0; center < n - 1; ++center) {
        int l = center, r = center + 1;
        while (l >= 0 && r < n && s[l] == s[r]) {
            palins.emplace_back(l, r);
            --l;
            ++r;
        }
    }

    return palins;
}
bool cmp(const pair<int, int> &a, const pair<int, int> &b, const string &s) {
    int len1 = a.second - a.first + 1;
    int len2 = b.second - b.first + 1;
    int l = 0, r = min(len1, len2) - 1, match = -1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (get_hash(a.first, a.first + m) == get_hash(b.first, b.first + m)) {
            match = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    if (match == min(len1, len2) - 1)
        return len1 < len2;
    return s[a.first + match + 1] < s[b.first + match + 1];
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        string s;
        int K;
        cin >> s >> K;
        int n = s.size();
        build_hash(s);
        vector<pair<int, int>> palins = get_palindromic_substrings(s);
        sort(palins.begin(), palins.end(), [&](auto &a, auto &b) {
            return cmp(a, b, s);
        });
        if (K > palins.size()) {
            cout << -1 << '\n';
        } else {
            auto p = palins[K - 1];
            cout << s.substr(p.first, p.second - p.first + 1) << '\n';
        }
    }
    return 0;
}
