#include <iostream>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    int counter = 0;
    // 500円を0枚からa-1枚まで探索する(i)
    for (int i = 0; i <= a; i++) {
        // 100円を0枚からb-1枚まで探索する(j)
        for (int j = 0; j <= b; j++) {
            // 目標金額を超えていないか？ && 50円の補填枚数はc以内であるか？
            int sub_total = 500 * i + 100 * j;
            if (sub_total <= x) {
                if ((x - sub_total) / 50 <= c) counter ++;
            } else {
                break;
            }
        }
    }
    // カウンタを出力
    cout << counter << endl;
}