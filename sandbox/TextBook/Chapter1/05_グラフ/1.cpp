// 蟻本P93
// 二部グラフ判定を解答

#include <bits/stdc++.h>
using namespace std;

const int MAX_V = 1010;
vector<vector<int>> G(MAX_V);
int check[MAX_V]; // 0: 未探索、1: 探索済
int color[MAX_V]; // 0: 黒、1: 白

void dfs(int v, int c) {

    if (c == 0) {
        c = 1;
    } else {
        c = 0;
    }

    for (auto itr = G[v].begin(); itr != G[v].end(); ++itr) {
        if (check[*itr] == 0) {
            check[*itr] = 1;
            color[*itr] = c;
            dfs(*itr, c);
        }
    }
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

    check[0] = 1;
    color[0] = 0;
    dfs(0, 0);

    string res = "Yes";
    for (int i = 0; i < V; ++i) {
        for (auto itr = G[i].begin(); itr != G[i].end(); ++itr) {
            if (color[i] == color[*itr]) {
                res = "No";
            }
        }
    }

    cout << res << endl;
    return 0;
}