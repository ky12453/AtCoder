#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N_MAX = 200010;
vector<vector<int>> tr(N_MAX);
vector<bool> used(N_MAX, false);
vector<ll> ans(N_MAX);
map<int, int> ma;


void dfs(int n, ll point) {
    used[n] = true;
    point += ma[n];
    ans[n] += point;

    stack<int> st;
    for (auto it : tr[n]) {
        if (!used[it]) st.push(it);
    }

    while (!st.empty()) {
        n = st.top(); st.pop();
        dfs(n, point);
    }
}


int main() {
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n - 1; ++i) {
        int a, b; cin >> a >> b;
        tr[a].push_back(b);
        tr[b].push_back(a);
    }

    for (int i = 0; i < q; ++i) {
        int p, x; cin >> p >> x;
        if (ma.count(p) == 0) {
            ma[p] = x;
        } else {
            ma[p] += x;
        }
    }

    dfs(1, 0);
    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
}