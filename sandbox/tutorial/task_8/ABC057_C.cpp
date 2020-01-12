#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int count_digits(ll n) {
    int digits = 0;

    while (n > 0) {
        digits++;
        n /= 10;
    }

    return digits;
}

int main() {
    ll n;
    cin >> n;

    int min = 11;
    for (ll i = 1; i * i <= n; ++i) {

        // nの約数ペアを算出する
        if (n % i != 0) continue;
        ll j = n / i;

        // 最小桁数を更新する
        int cur = max(count_digits(i), count_digits(j));
        if (cur < min) min = cur;
    }

    cout << min << endl;
}