// 再帰関数により階乗を算出

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    for (int i = 0; i <= 10; ++i) {
        cout << i << ": " << factorial(i) << endl;
    }
    return 0;
}