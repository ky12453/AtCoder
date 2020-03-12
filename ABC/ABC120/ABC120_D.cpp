#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
using ll = long long;

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

ll cmb(ll n) {
    return n * (n - 1) / 2;
}

int main() {
    int N, M;
    cin >> N >> M;

    int A[M], B[M];
    for (int i = 0; i < M; ++i) cin >> A[i] >> B[i];

    // 逆からデータ構造を構築する方が効率的
    reverse(A, A + M);
    reverse(B, B + M);

    int t = 0;
    ll ans[M];
    UnionFind uf(N);
    map<int, int> mp;
    for (int i = 0; i < M ; ++i) {

        int aa = A[i] - 1;
        int bb = B[i] - 1;

        if (i == 0) {
            ans[i] = cmb(N);
        }
        else {
            ans[i] = cmb(N);
            for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
                ans[i] -= cmb(itr->first) * itr->second;
            }
        }

        int siza = uf.size(aa);
        int sizb = uf.size(bb);
        int flg = uf.same(aa, bb);

        uf.unite(aa, bb);
        int sizab = uf.size(aa);

        if (!flg) {
            if (mp.count(siza) != 0) {
                mp[siza] -= 1;
                if (mp[siza] == 0) mp.erase(siza);
            }
            if (mp.count(sizb) != 0) {
                mp[sizb] -= 1;
                if (mp[sizb] == 0) mp.erase(sizb);
            }
            if (mp.count(sizab) != 0) {
                mp[sizab] += 1;
            }
            else {
                mp[sizab] = 1;
            }
        }
    }

    reverse(ans, ans + M);

    for (int i = 0; i < M; ++i) {
        cout << ans[i] << endl;
    }

    return 0;
}