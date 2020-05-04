#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int h[n]; for (int i = 0; i < n; ++i) cin >> h[i];

    vector<vector<int>> bucket(n);
    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;
        a--, b--;
        bucket[a].push_back(b);
        bucket[b].push_back(a);
    }

    int res = 0;
    for (int i = 0; i < n; ++i) {
        if (bucket[i].size() == 0) {
            res++;
            continue;
        }

        int highest = 0;
        for (int j = 0; j < bucket[i].size(); ++j) {
            highest = max(highest, h[bucket[i][j]]);
        }

        if (h[i] > highest) res++;
    }

    cout << res << endl;
    return 0;
}