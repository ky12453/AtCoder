#include <bits/stdc++.h>
using namespace std;

#define REP(w, n) for(int w=0;w<int(n);++w)

int main() {
    int n; cin >> n;
    vector<int> b(n + 2, 0);
    for (int i = 1; i < n; ++i) cin >> b[i];
    b[0] = b[1];
    b[n] = b[n - 1];
    b[n + 1] = b[n];

    int res = 0;
    for (int i = 1; i <= n; ++i) {
        res += min({b[i - 1], b[i], b[i + 1]});
    }

    cout << res << endl;
}