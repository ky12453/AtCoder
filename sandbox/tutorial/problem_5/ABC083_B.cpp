#include <iostream>
#include <stdio.h>
using namespace std;

int getSumOfDigit(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum; 
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int res = 0;
    // 1以上、n以下整数を取得する
    for (int i = 1; i <= n; i++) {
        // 各桁を合計した値を取得
        int sum = getSumOfDigit(i);
        // 合計値がa以上、かつ、b以下であればresに整数値を加算する
        if (sum >= a && sum <= b) res += i;
    }
    cout << res << endl;
}
