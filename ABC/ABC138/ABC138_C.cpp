#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    double v[n]; for (int i = 0; i < n; ++i) cin >> v[i];

    sort(v, v + n);
    double res = (v[0] + v[1]) / 2;
    for (int i = 2; i < n; ++i) {
        res = (res + v[i]) / 2;
    }

    cout << res << endl;
}