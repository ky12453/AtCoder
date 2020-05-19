#include <bits/stdc++.h>
using namespace std;
#define REP(w, n) for(int w=0;w<int(n);++w)

const int INF = 1<<29;

int main() {
    int n; cin >> n;
    vector<int> b(n + 2, INF);
    for (int i = 1; i < n; ++i) cin >> b[i];

    int res = 0;
    for (int i = 1; i <= n; ++i) res += min(b[i - 1], b[i]);

    cout << res << endl;
}