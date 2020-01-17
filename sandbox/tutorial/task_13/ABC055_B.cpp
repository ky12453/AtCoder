#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    ll ans = 1;
    for (int i = 1; i <= n; ++i) {
        ans = (ans * i) % 1000000007;
    }

    cout << ans << endl;
}