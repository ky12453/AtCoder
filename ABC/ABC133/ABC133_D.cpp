#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    ll a[n]; for (int i = 0; i < n; ++i) cin >> a[i];

    ll sum = 0;
    for (int i = 0; i < n; ++i) sum += a[i];

    ll mnt[n];
    mnt[0] = 0;
    for (int i = 1; i < n; ++i) {
        mnt[i] = a[i - 1] * 2 - mnt[i - 1];
    }

    ll smnt = 0;
    for (int i = 0; i < n; ++i) smnt += mnt[i];

    ll t = sum - smnt;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            cout << mnt[i] + t << " ";
        } else {
            cout << mnt[i] - t << " ";
        }
    }
    cout << endl;
    return 0;
}