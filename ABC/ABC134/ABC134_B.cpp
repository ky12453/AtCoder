#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d; cin >> n >> d;
    int t = 2 * d + 1;
    if (n % t == 0) {
        cout << n / t << endl;
    } else {
        cout << n / t + 1 << endl;
    }
    return 0;
}