#include <iostream>
using namespace std;

int main() {
    int n, k, x, y;
    cin >> n >> k >> x >> y;

    int ans = 0;
    if (n <= k) {
        for (int i = 0; i < n; ++i) {
            ans += x;
        }
    } else {
        for (int i = 0; i < k; ++i) {
            ans += x;
        }

        for (int i = k + 1; i <= n; ++i) {
            ans += y;
        }
    }

    cout << ans << endl;
    return 0; 
}