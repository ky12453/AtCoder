#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;

    int h[n];
    for (int i = 0; i < n; ++i) cin >> h[i];

    sort(h, h + n, greater<int>());

    ll ans = 0;
    if (k >= n) {
        ans = 0;
    } else {
        for (int i = k; i < n; ++i) {
            ans += h[i];
        }
    }

    cout << ans << endl;
    return 0;
}