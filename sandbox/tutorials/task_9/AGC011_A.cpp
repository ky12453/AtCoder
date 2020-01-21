#include <iostream>
using namespace std;

int main() {
    int n, c, k;
    cin >> n >> c >> k;

    int t[n];
    for(int i = 0; i < n; ++i) cin >> t[i];

    // 空港に到着する時刻順にソート
    sort(t, t + n);

    int ans = 0;
    int i = 0;
    while (i < n) {

        // 許容時間を定義
        int wlimit = t[i] + k;
        int climit = 0;

        // 許容時間、バス定員を満足するあいだループ
        while (i < n && climit < c && wlimit >= t[i]) {
            ++climit;
            ++i;
        }

        // バス台数を更新
        ++ans;
    }

    cout << ans << endl;
}