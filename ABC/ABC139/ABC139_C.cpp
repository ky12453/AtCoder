#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> h(n); for (int i = 0; i < n; ++i) cin >> h[i];

    int res = 0, t = 0;
    for (int i = 1; i < n; ++i) {
        if (h[i - 1] >= h[i]) {
            t += 1;
        } else {
            res = max(res, t);
            t = 0;
        }
    }
    res = max(res, t);

    cout << res << endl;
}