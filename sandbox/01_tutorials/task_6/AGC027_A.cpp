#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int a[110];
    for (int i = 0; i < n; ++i) cin >> a[i];

    // 子供が喜ぶお菓子の数が少ない順にソートしてx個配りきる
    int num = 0;
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        if (x >= a[i]) {
            x -= a[i];
            num++;
        }
    }

    // もしお菓子が余る場合にはある一人の子にお菓子を配り犠牲にする
    if (num != 0 && x > 0) num--;

    cout << num << endl;
}