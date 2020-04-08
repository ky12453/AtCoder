// 蟻本P98
// ワーシャルフロイド法を実装

#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 29;
const int MAX_V = 20;

int main() {
    int V, E; cin >> V >> E;
    int S, G; cin >> S >> G;

    vector<vector<int>> graph(MAX_V, vector<int>(MAX_V, INF));
    for (int i = 0; i < MAX_V; ++i) {
        graph[i][i] = 0;
    }

    for (int i = 0; i < E; ++i) {
        int f, t, c; cin >> f >> t >> c;
        graph[f][t] = min(graph[f][t], c);
        graph[t][f] = min(graph[t][f], c);       
    }

    for (int k = 0; k < V; ++k) {
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    cout << graph[S][G] << endl;
    return 0;
}