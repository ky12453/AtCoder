#include <bits/stdc++.h>
using namespace std;

#define REP(w, n) for(int w=0;w<int(n);++w)

int main() {
    int n, k; cin >> n >> k;
    int h[n]; REP(i, n) cin >> h[i];

    int res = 0;
    REP(i, n) {
        if (h[i] >= k) res += 1;
    }

    cout << res << endl;
}