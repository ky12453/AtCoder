#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int a[n + 1]; for (int i = 0; i <= n; ++i) cin >> a[i];
    int b[n]; for (int i = 0; i < n; ++i) cin >> b[i];

    ll res = 0;
    for (int i = 0; i < n; ++i) {
        if (b[i] > a[i]) {
            int t = b[i] - a[i];
            res += a[i] + min(a[i + 1], t);
            a[i + 1] -= min(a[i + 1], t);
        } else {
            res += b[i];
        }
    }

    cout << res << endl;
    return 0;
}