#include <iostream>
#include <vector>
using namespace std;

struct UnionFind {
    vector<int> par;
    vector<int> rnk;

    UnionFind(int N) : par(N), rnk(N) {
        for (int i = 0; i < N; ++i) {
            par[i] = i;
            rnk[i] = 1;
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

        if (rnk[rx] >= rnk[ry]) {
            par[ry] = rx;
            if (rnk[rx] == rnk[ry]) rnk[rx]++;
        } else {
            par[rx] = ry;
        }
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

    vector<bool> ans;
    for (int i = 0; i < Q; ++i) {
        int p, a, b;
        cin >> p >> a >> b;

        if (p == 0) {
            uf.unite(a, b);
        } else {
            if (uf.same(a, b)) {
                ans.push_back(true);
            } else {
               ans.push_back(false);
            }
        }
    }

    for (auto itr = ans.begin(); itr != ans.end(); ++itr) {
        if (*itr) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}