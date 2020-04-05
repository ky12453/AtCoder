// 蟻本P95
// ベルマンフォード法を実装

#include <bits/stdc++.h>
using namespace std;

struct edge {
    int from;
    int to;
    int cost;
};

const int INF = 1 << 29;
const int MAX_V = 20;
const int MAX_E = 20;

int main() {
    int V, E; cin >> V >> E;
    int S, G; cin >> S >> G;
    
    // グラフ構造を格納
    vector<edge> edges;
    for (int i = 0; i < E; ++i) {
        edge e; cin >> e.from >> e.to >> e.cost;
        edges.push_back(e);
    }

    // 距離配列の初期化
    vector<int> d(V);
    fill(d.begin(), d.end(), INF);
    d[S] = 0;

    // 最短経路を探索
    while (true) {
        bool update = false;
        for (int i = 0; i < E; ++i) {
            edge e = edges[i];
            // 最短経路で更新
            if (e.from != INF && d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        
        if (!update) break;
    }

    cout << d[G] << endl;
    return 0;
}
