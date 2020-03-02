#include <iostream>
#include <vector>
using namespace std;

struct UnionFind {
    vector<int> par;

    UnionFind(int N) : par(N) {
        for (int i = 0; i < N; ++i) par[i] = i;
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
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main () {
    int N, Q;
    cin >> N >> Q;

    UnionFind uf(N);

    for (int i = 0; i < Q; ++i) {
        int p, a, b;
        cin >> p >> a >> b;

        if (p == 0) {
            uf.unite(a, b);
        } else {
            if (uf.same(a, b)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}