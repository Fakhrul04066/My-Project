#include <bits/stdc++.h>
using namespace std;

#define MAX_N 305
#define NONE -1

vector<int> G[MAX_N];
int color[MAX_N];

bool DFS(int s, int paint) {
    color[s] = paint;
    for (int i = 0; i < G[s].size(); i++) {
        int target = G[s][i];
        if (color[target] == NONE && !DFS(target, !paint))
            return false;
        else if (color[target] != NONE && color[target] == paint)
            return false;
    }
    return true;
}
int main() {
    int n;
    while (scanf("%d", &n) == 1 && n) {
        for (int i = 0; i <= n; i++)
            G[i].clear();
        int a, b;
        while (scanf("%d%d", &a, &b) == 2 && a && b) {
            G[a].push_back(b);
            G[b].push_back(a);
        }
        memset(color, NONE, sizeof(color));
        bool res = true;
        for (int i = 1; i <= n && res; i++)
            if (color[i] == NONE)
                res &= DFS(i, 0);
        if (res)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}