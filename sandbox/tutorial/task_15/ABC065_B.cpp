#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n + 1];
    for (int i = 1; i <= n; ++i) cin >> a[i];

    // 探索のスタート地点を探索
    int pt = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[i] == 1) pt = i;
    }

    // スタート地点からシミュレーション開始
    int ans = 0;
    while (true) {
        pt = a[pt];
        ans++;

        // ボタン2を発見したら終了
        if (a[pt] == 2) break;

        // 全てのボタンを探索したことになる数になったら終了
        if (ans == n -1) {
            ans = -1;
            break;
        }
    }

    cout << ans << endl;
}