#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    ll t = a % b;
    if (t == 0) return b;
    return gcd(b, t);
}

int main() {
    ll a, b; cin >> a >> b;
    ll g = gcd(a, b);

    vector<pair<ll, ll>> res;
    for (ll i = 2; i * i <= g; ++i) {
        if (g % i != 0) continue;
        ll num = 0;
        while (g % i == 0) {
            num++;
            g /= i;
        }
        res.push_back(make_pair(i, num));
    }
    if (g != 1) res.push_back(make_pair(g, 1));

    cout << res.size() + 1 << endl;
}