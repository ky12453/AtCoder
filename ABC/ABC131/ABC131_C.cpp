#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    ll t = a % b;
    if (t == 0) return b;
    return gcd(b, t);
}

ll lcm(ll a, ll b) {
    ll t = gcd(a, b);
    return a * b / t;
}

ll solve(ll n, ll a, ll  b) {
    return n - n / a - n / b + n / lcm(a, b);
}

int main() {
    ll a, b, c, d; cin >> a >> b >> c >> d;
    ll x = solve(b, c, d);
    ll y = solve(a - 1, c, d);
    cout << x - y << endl;
    return 0;
}