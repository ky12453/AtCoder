#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int res = 1;
    if (b == 1) {
        cout << 0 << endl;
        return 0;
    } else {
        while (b > a * res - (res - 1)) res++;
    }

    cout << res << endl;
}