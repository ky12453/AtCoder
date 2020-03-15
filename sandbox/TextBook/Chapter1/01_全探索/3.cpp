// メモ化再帰によりフィボナッチ数列を算出

#include <bits/stdc++.h>
using namespace std;

vector<int> memo(11, 0);

int fib(int n) {
    if (n == 1 || n == 2) return 1;
    if (memo[n] != 0) {
        return memo[n];
    }
    return memo[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    for (int i = 1; i <= 10; ++i) {
        cout << i << ": " << fib(i) << endl;
    }
    return 0;
}