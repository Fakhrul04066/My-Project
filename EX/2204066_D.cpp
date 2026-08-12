#include <bits/stdc++.h>
using namespace std;
const double EPS = 1e-9;
int main() {
    int n, m, r;
    cin >> n >> m >> r;
    r--; 
    vector<vector<int>> adj(n);
    vector<int> outdeg(n, 0);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        outdeg[u]++;
    }
    vector<int> sinks;
    for (int i = 0; i < n; ++i)
        if (outdeg[i] == 0)
            sinks.push_back(i);
    vector<double> prob(n, 0.0);
    prob[r] = 1.0;
    vector<int> indeg(n, 0);
    for (int u = 0; u < n; ++u)
        for (int v : adj[u])
            indeg[v]++;
    queue<int> q;
    for (int i = 0; i < n; ++i)
        if (indeg[i] == 0)
            q.push(i);
    vector<int> topo;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        topo.push_back(u);
        for (int v : adj[u]) {
            indeg[v]--;
            if (indeg[v] == 0)
                q.push(v);
        }
    }
    for (int u : topo) {
        if (outdeg[u] == 0) continue;
        double p = prob[u] / outdeg[u];
        for (int v : adj[u])
            prob[v] += p;
    }
    double maxp = 0.0;
    for (int s : sinks)
        if (prob[s] > maxp)
            maxp = prob[s];
    for (int s : sinks)
        if (fabs(prob[s] - maxp) < EPS)
            cout << (s + 1) << " ";
    cout << endl;
    return 0;
}