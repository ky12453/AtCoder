#include <iostream>
using namespace std;
using ll = long long;

const int mod = 1000000007;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll ans = a * b % mod;
    ans *= c;
    ans %= mod;

    cout << ans << endl;
    return 0;
}