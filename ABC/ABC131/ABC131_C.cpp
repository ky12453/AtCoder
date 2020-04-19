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

int main() {
    ll A, B, C, D; cin >> A >> B >> C >> D;

    ll c1;
    if (A % C == 0) {
        c1 = A / C;
    } else {
        c1 = A / C + 1;
    }

    ll c2;
    if (B / C == 0) {
        c2 = B / C;
    } else {
        c2 = B / C;
    }

    ll d1;
    if (A % D == 0) {
        d1 = A / D;
    } else {
        d1 = A / D + 1;
    }

    ll d2;
    if (B / D == 0) {
        d2 = B / D;
    } else {
        d2 = B / D;
    }

    ll cd1;
    ll t = lcm(C, D);
    if (A % t == 0) {
        cd1 = A / t;
    } else {
        cd1 = A / t + 1;
    }

    ll cd2;
    if (B / t == 0) {
        cd2 = B / t;
    } else {
        cd2 = B / t;
    }

    ll c3 = c2 - c1 + 1;
    ll d3 = d2 - d1 + 1;
    ll cd3 = cd2 - cd1 + 1;
    cout << B - A + 1 - c3 - d3 + cd3 << endl;
    return 0;
}