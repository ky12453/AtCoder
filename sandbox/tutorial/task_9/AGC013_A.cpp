#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100010];
    for (int i = 0; i < n; ++i) cin >> a[i];

    int ans = 1;
    // -1: 単調減少、0: 不定、1: 単調増加
    int state;

    // 配列A全体をn-1まで探索
    for (int i = 0; i < n - 1; ++i) {

        // 配列i, 配列i+1が同じ値ならば次のループに遷移
        if (a[i] == a[i + 1]) continue;

        if (state == 0) {
            if (a[i] < a[i + 1]) {
                state = 1;
            } else {
                state = -1;
            }
        } else if (state == 1) {
            if (a[i] > a[i + 1]) {
                state = 0;
                ans++;
            }
        } else {
            if (a[i] < a[i + 1]) {
                state = 0;
                ans++;
            }
        }
    }

    cout << ans << endl;
}
