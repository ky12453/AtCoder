#include <iostream>
using namespace std;
using ll = long long int;

int main() {
    ll a, b, x;
    cin >> a >> b >> x;

    ll ans = 0;
    if (a % x == 0) ans = 1;
    ans += (ll)(b / x) - (ll)(a / x);

    cout << ans << endl;
}