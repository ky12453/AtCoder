#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    double res = 0;
    for (int i = 0; i < n; ++i) {
        double t; cin >> t;
        res += 1 / t;
    }

    cout << 1 / res << endl;
}