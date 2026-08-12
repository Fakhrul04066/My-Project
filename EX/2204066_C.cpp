#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
struct Edge {
    int u, v, w;
    bool operator<(const Edge& other) const {
        return w < other.w; 
    }
};
int find(vector<int>& parent, int x) {
    if (parent[x] != x)
        parent[x] = find(parent, parent[x]);
    return parent[x];
}
bool unite(vector<int>& parent, vector<int>& rank, int x, int y) {
    int xr = find(parent, x), yr = find(parent, y);
    if (xr == yr) return false;
    if (rank[xr] < rank[yr]) parent[xr] = yr;
    else if (rank[xr] > rank[yr]) parent[yr] = xr;
    else { parent[yr] = xr; rank[xr]++; }
    return true;
}
int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    vector<Edge> edges;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int w = gcd(a[i], a[j]);
            edges.push_back({i, j, w});
        }
    }
    sort(edges.rbegin(), edges.rend()); 
    vector<int> parent(N), rank(N, 0);
    iota(parent.begin(), parent.end(), 0);
    int total = 0, count = 0;
    for (auto& e : edges) {
        if (unite(parent, rank, e.u, e.v)) {
            total += e.w;
            count++;
            if (count == N - 1) break;
        }
    }
    cout << total << endl;
    return 0;
}