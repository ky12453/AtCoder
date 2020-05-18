#include <bits/stdc++.h>
using namespace std;

#define REP(w, n) for(int w=0;w<int(n);++w)

int main() {
    int n; cin >> n;
    int a[n]; REP(i, n) cin >> a[i];
    int b[n]; REP(i, n) cin >> b[i];
    int c[n - 1]; REP(i, n - 1) cin >> c[i];

    int res = 0;
    int prv = -30;
    REP(i, n) {
        int t = a[i] - 1;
        res += b[t];
        if (prv + 1 == t) res += c[t - 1];
        prv = t;
    }

    cout << res << endl;
}