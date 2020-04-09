// 蟻本P100
// プリム法を実装

#include <bits/stdc++.h>
using namespace std;
struct edge {
    int from;
    int to;
    int cost;
};

const int INF = 1 << 29;
const int MAX_V = 20;
int cost[MAX_V][MAX_V];
int mincost[MAX_V];
bool used[MAX_V];

int main() {
    int V, E; cin >> V >> E;

    for (int i = 0; i < MAX_V; ++i) {
        for (int j = 0; j < MAX_V; ++j) {
            if (i == j) {
                cost[i][j] = 0;
            } else {
                cost[i][j] = INF;
            }
        }
    }

    for (int i = 0; i < E; ++i) {
        int f, t, c; cin >> f >> t >> c;
        cost[f][t] = min(cost[f][t], c);
        cost[t][f] = min(cost[t][f], c);
    }

    fill(mincost, mincost + MAX_V, INF);
    fill(used, used + MAX_V, false);
    mincost[0] = 0;
    int res = 0;

    while (true) {
        int t = -1;
        for (int i = 0; i < V; ++i) {
            if (!used[i] && (t = -1 || mincost[i] < mincost[t])) t = i;
        }

        if (t == -1) break;
        used[t] = true;
        res += mincost[t];

        for (int i = 0; i < V; ++i) {
            mincost[i] = min(mincost[i], cost[t][i]);
        }
    }

    cout << res << endl;
    return 0;
}