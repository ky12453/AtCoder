// 蟻本P93
// 二部グラフ判定を解答

#include <bits/stdc++.h>
using namespace std;

const int MAX_V = 1010;
vector<vector<int>> G(MAX_V);
int color[MAX_V];

bool dfs(int v, int c) {
    color[v] = c;
    for (int i = 0; i < G[v].size(); ++i) {
        if (color[G[v][i]] == c) return false;
        if (color[G[v][i]] == 0 && !dfs(G[v][i], -c)) return false;
    }

    return true;
}

int main() {
    int V, E;
    cin >> V >> E;

    // 隣接リストでグラフ構造を保持
    for (int i = 0; i < E; ++i) {
        int tv, te;
        cin >> tv >> te;

        G[tv].push_back(te);
        G[te].push_back(tv);
    }

    for (int i = 0; i < V; ++i) {
        if (color[i] == 0) {
            if (!dfs(i, 1)) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}