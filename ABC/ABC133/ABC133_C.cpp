#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll l, r; cin >> l >> r;

    if (l / 2019 != r / 2019) {
        cout << 0 << endl;
        return 0;
    } else {
        ll res = 2020;
        for (ll i = l; i <= r; ++i) {
            for (ll j = i + 1; j <= r; ++j) {
                res = min(res, i * j % 2019);
            }
        }
        cout << res << endl;
    }
    return 0;
}