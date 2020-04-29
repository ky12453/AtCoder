#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;

    int d = abs(a - b);
    if (d % 2 == 1) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        int m = min(a, b);
        cout << m + d / 2 << endl;
    }
    return 0;
}