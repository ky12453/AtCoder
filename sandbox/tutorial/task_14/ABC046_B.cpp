#include <iostream>
using namespace std;
using ll = long long;

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