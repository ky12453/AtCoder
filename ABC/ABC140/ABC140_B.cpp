#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(),(a).end()
#define REP(w, n) for(int w=0;w<int(n);++w)

int main() {
    int n; cin >> n;
    int a[n]; REP(i, n) {
        int t; cin >> t;
        a[i] = t - 1;
    }
    int b[n]; REP(i, n) cin >> b[i];
    int c[n]; REP(i, n - 1) cin >> c[i];

    int res = 0;
    int pre = -100;
    REP(i, n) {
        res += b[a[i]];
        if (pre + 1 == a[i]) res += c[pre];
        pre = a[i];
    }

    cout << res << endl;
}