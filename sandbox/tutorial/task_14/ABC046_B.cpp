#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

// O(n)の解答方法
/*
int main() {
    int n, k;
    cin >> n >> k;

    ll ans = 1;
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            ans *= k;
        } else {
            ans *= k -1;
        }
    }

    cout << ans << endl;
}
*/

// O(1)の解答方法
int main() {
    int n, k;
    cin >> n >> k;

    ll ans = k * pow(k - 1, n - 1);
    cout << ans << endl;
}