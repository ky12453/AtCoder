// 蟻本P96
// 隣接行列を使用してダイクストラ法を実装

#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 29;
const int MAX_V = 10;
int cost[MAX_V][MAX_V];
int d[MAX_V];
bool used[MAX_V];

int main() {
    int V, E;
    cin >> V >> E;

    int S, G;
    cin >> S >> G;

    // 配列を初期化
    for (int i = 0; i < MAX_V; ++i) {
        for (int j = 0; j < MAX_V; ++j) {
            cost[i][j] = INF;
        }
    }
    fill(d, d + MAX_V, INF);
    fill(used, used + MAX_V, false);
    d[S] = 0;
    
    // 移動経路のコストを更新
    for (int i = 0; i < E;  ++i) {
        int f, t, c;
        cin >> f >> t >> c;
        cost[f][t] = c;
        cost[t][f] = c;
    }

    while (true) {
        int t = -1;
        // まだ使われていない頂点のうち距離が最小のものを選ぶ
        for (int i = 0; i < V; ++i) {
            if (!used[i] && (t == -1 || d[i] < d[t])) {
                t = i;
            }
        }

        if (t == -1) break;

        for (int i = 0; i < V; ++i) {
            d[i] = min(d[i], d[t] + cost[t][i]);
        }
        used[t] = true;
    }

    cout << d[G] << endl;
    return 0;
}