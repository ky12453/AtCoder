#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

struct UnionFind {
    vector<int> par;
    vector<int> c;

    UnionFind(int N) : par(N) {
        for (int i = 0; i < N; ++i) {
            par[i] = i;
            c[i] = 1;
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
        c[rx] += c[ry];
    }

    int count(int x) {
        return c[root(x) - 1];
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int A[100010], B[100010], C[100010], D[100010];
int f[100010], b[100010];

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    for (int i = 0; i < M; ++i) cin >> A[i] >> B[i];
    for (int i = 0; i < K; ++i) cin >> C[i] >> D[i];

    // 連結成分
    UnionFind uf(N);
    for (int i = 0; i < M; ++i) uf.unite(A[i], B[i]);

    for (int i = 0; i < N; ++i) {

        // 友達
        int cnt = 0;
        for (int j = 0; j < M; ++j) {
            if (A[j] == i) ++cnt;
            if (B[j] == i) ++cnt;
        }
        f[i] = cnt;

        // ブロック
        cnt = 0;
        for (int j = 0; j < K; ++j) {
            if (C[j] == i) ++cnt;
            if (D[j] == i) ++cnt;
        }
        b[i] = cnt;
    }

    // 友達候補 = 連結成分 - 1 - 友達 - ブロック
    for (int i = 0; i < N; ++i) {
        int cf = uf.count(i) - 1 - f[i] - b[i];
        cout << cf << endl;
    }

    return 0;
}
