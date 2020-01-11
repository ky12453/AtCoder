#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[300010];
    for (int i = 0; i < 3 * n; ++i) cin >> a[i];

    // 強い順にソートして奇数番号の要素をn個取得し、値の合計をとる
    long long int sum = 0;
    sort(a, a + 3 * n, greater<int>());
    for (int i = 0; i < 2 * n; ++i) {
        if (i % 2 == 1) sum += a[i];
    }

    cout << sum << endl;
}