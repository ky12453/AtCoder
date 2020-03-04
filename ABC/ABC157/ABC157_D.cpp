#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

struct UnionFind {
    vector<int> par;
    vector<int> siz;

    UnionFind(int N) : par(N), siz(N) {
        for (int i = 0; i < N; ++i) {
            par[i] = i;
            siz[i] = 1;
        }
    }

    int root(int x) {
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return;
        par[rx] = ry;
        siz[ry] = siz[ry] + siz[rx];
    }

    int size(int x) {
        return siz[root(x)];
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    UnionFind uf(N);
    vector<set<int>> dame(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;

        // 0始まりの添字に合わせるために1減算する
        --a; --b;
        dame[a].insert(b);
        dame[b].insert(a);
        uf.unite(a, b);
    }

    for (int i = 0; i < K; ++i) {
        int c, d;
        cin >> c >> d;

        --c, --d;
        if (!uf.same(c, d)) continue;
        dame[c].insert(d);
        dame[d].insert(c);
    }

    for (int i = 0; i < N; ++i) {
        int ans = uf.size(i) - 1;
        ans -= dame[i].size();
        cout << ans << " ";
    }
    cout << endl;

    return 0;
}
