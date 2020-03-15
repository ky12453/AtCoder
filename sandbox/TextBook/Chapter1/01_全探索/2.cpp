// 再帰関数によりフィボナッチ数列を算出

#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if (n == 1 || n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    for (int i = 1; i <= 10; ++i) {
        cout << i << ": " << fib(i) << endl;
    }
    return 0;
}