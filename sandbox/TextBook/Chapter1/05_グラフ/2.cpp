// 蟻本P95
// ベルマンフォード方法を実装

#include <bits/stdc++.h>
using namespace std;

const int MAX_V = 10;
const int MAX_E = 10;
const int INF = 1 << 29;

int d[MAX_V];
int V, E;

struct edge {
    int from;
    int to;
    int cost;
};
vector<edge> G;

void shortest_path(int s) {
    for (int i = 0; i < V; ++i) d[i] = INF;
    d[s] = 0;

    while (true) {
        bool update = false;
        for (int i = 0; i < E; ++i) {
            edge e = G[i];
            if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }

        if (!update) break;
    }
}

int main() {
    cin >> V >> E;

    for (int i = 0; i < E; ++i) {
        struct edge t;
        cin >> t.from >> t.to >> t.cost;
        G.push_back(t);
    }

    shortest_path(0);
    cout << d[5] << endl;
    return 0;
}