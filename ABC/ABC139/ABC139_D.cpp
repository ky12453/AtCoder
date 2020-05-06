#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll res;
    if (n % 2 == 0) {
        ll t = (n - 1) / 2;
        res = n * t + (n / 2);
    } else {
        res = n * (n - 1) / 2;
    }
    cout << res << endl;
    // int res;
    // if (n % 2 == 0) {
    //     res = n * (n - 1) / 2 + n / 2;
    // } else {
    //     res = n * (n - 1) / 2;
    // }

    // cout << res << endl;
}