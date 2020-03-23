// 蟻本P55
// ナップサック問題をメモ化再帰により解答

#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 110;
const int W_MAX = 10010;
int N, W;
int weight[N_MAX], value[N_MAX], dp[N_MAX][W_MAX];

int main() {
    cin >> N >> W;
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    // メモ用配列を初期化
    memset(dp, 0, sizeof(dp));

    for (int i = N - 1; i >= 0; --i) {
        for (int j = 0; j <= W; ++j) {
            if (j < weight[i]) {
                dp[i][j] = dp[i + 1][j];
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - weight[i]] + value[i]);
            }
        }
    }

    cout << dp[0][W] << endl;
    return 0;
}
