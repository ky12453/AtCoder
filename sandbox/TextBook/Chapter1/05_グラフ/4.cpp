// 蟻本P97
// 優先度付きキューによるダイクストラ法の実装

#include <bits/stdc++.h>
using namespace std;
using pr = pair<int, int>;

struct edge {
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
    vector<vector<edge>> graph(V);
    for (int i = 0; i < E; ++i) {
        int f, t, c; cin >> f >> t >> c;
        edge e;
        e.to = t; e.cost = c;
        graph[f].push_back(e);
        e.to = f;
        graph[t].push_back(e);
    }

    // 距離配列の初期化
    vector<int> d(V);
    fill(d.begin(), d.end(), INF);
    d[S] = 0;

    priority_queue<pr, vector<pr>, greater<pr>> que;
    que.push(pr(0, S));

    while (!que.empty()) {
        pr t = que.top(); que.pop();
        int vv = t.second;

        for (int i = 0; i < graph[vv].size(); ++i) {
            edge e = graph[vv][i];
            if (d[e.to] > d[vv] + e.cost) {
                d[e.to] = d[vv] + e.cost;
                que.push(pr(d[e.to], e.to));
            }
        }
    }

    cout << d[G] << endl;
    return 0;
}
