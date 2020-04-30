#include <bits/stdc++.h>
using namespace std;

bool isEvenDigit(int n) {
    int digit = 0;
    while (n > 0) {
        digit++;
        n /= 10;
    }
    if (digit % 2 != 0) return true;
    return false;
}

int main() {
    int n; cin >> n;
    int res = 0;
    for (int i = 1; i <= n; ++i) {
        if (isEvenDigit(i)) res++;
    }
    cout << res << endl;
    return 0;

}