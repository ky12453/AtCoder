#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;

    int cnt = 0;
    while (a > 0 && c > 0) {
        if (cnt % 2 == 0) {
            c -= b;
        } else {
            a -= d;
        }
        cnt++;
    }

    if (a <= 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}