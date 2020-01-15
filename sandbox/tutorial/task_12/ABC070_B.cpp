#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans;
    // Aliceの方が早くボタンを押すケース
    if (a <= c) {

        // 包含しない
        if (b < d) ans = max(b - c, 0);
        // 包含する
        if (b >= d) ans = d - c;
    }

    // Bobの方が早くボタンを押すケース
    if (a > c) {

        // 包含しない
        if (d < b) ans = max(d - a, 0);
        // 包含する
        if (b >= d) ans = b - a;
    }

    cout << ans << endl;
}