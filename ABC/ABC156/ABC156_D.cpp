#include <iostream>
using namespace std;
using ll = long long;

const int mod = 1000000007;

ll modpow(ll n, ll p, ll mod) {
    if (p == 0) return 1;
    if (p % 2 == 0) {
        ll t = modpow(n, p / 2, mod);
        return t * t % mod;
    }

    ll t = modpow(n, p - 1, mod);
    return n * t % mod;
}

ll modcmb(ll n, ll a) {

    ll t1 = 1;
    for (int i = 0; i < a; ++i) {
        t1 *= (n - i);
        t1 %= mod;
    }

    ll t2 = 1;
    for (int i = 0; i < a; ++i) {
        t2 *= modpow(i + 1, mod - 2, mod);
        t2 %= mod;
    }

    return t1 * t2 % mod;
}

int main() {
    ll N, A, B;
    cin >> N >> A >> B;

    ll total = modpow(2, N, mod) - 1;

    // nCaを算出
    ll nca = modcmb(N, A);

    // nCbを算出
    ll ncb = modcmb(N, B);

    ll ans = (total - nca + mod) % mod;
    ans = (ans - ncb + mod) % mod;

    cout << ans << endl;
    return 0;
}