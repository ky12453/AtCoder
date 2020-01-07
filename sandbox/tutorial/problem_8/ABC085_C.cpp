#include <iostream>
using namespace std;

int main() {
    int n, yy;
    cin >> n >> yy;

    int x = -1;
    int y = -1;
    int z = -1;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            // 1000円の枚数はN-10000円枚数-5000円枚数
            int k = n - i - j;

            // 1000円の枚数は非負の数
            if (k < 0) break;

            // 金額の条件を満たすか検証
            if (10000 * i + 5000 * j + 1000 * k == yy) {
                x = i;
                y = j;
                z = k;
            }
        }
    }

    cout << x << " " << y << " " << z << endl; 
}