#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n + 1];
    for (int i = 1; i <= n; ++i) cin >> a[i];

    // スタート地点からシミュレーション開始
    int pt = 1;
    int ans = 0;
    while (true) {
        // ２番目のボタンが光っていれば終了
        if (pt == 2) break;

        // ボタンを押して次のボタンを光らせる
        pt = a[pt];
        ans++;

        // n回ボタンを押していたら終了
        if (ans == n) {
            ans = -1;
            break;
        }
    }

    cout << ans << endl;
}