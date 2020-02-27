// https://atcoder.jp/contests/dp/tasks/dp_e

#include <iostream>
using namespace std;

const long long INF = 1LL<<60;
long long dp[110][100010];

int main() {
    int N, W;
    cin >> N >> W;

    int weight[110];
    int value[110];
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    // dp配列を初期化
    for (int i = 0; i < 110; ++i) {
        for (int j = 0; j < 100010; ++j) {
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;

    // dp配列を緩和
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= 100000; ++j) {
            dp[i][j] = min(dp[i][j], dp[i - 1][j]);
            if (j >= value[i - 1]) {
                if (dp[i - 1][j - value[i - 1]] + weight[i - 1] <= W) {
                    dp[i][j] = min(dp[i][j], dp[i - 1][j - value[i - 1]] + weight[i - 1]);
                }
            }
        }
    }

    // 価値の最大値を探索
    int ans = 0;
    for (int j = 0; j <= 100000; ++j) {
        if (dp[N][j] != INF) {
            ans = max(ans, j);
        }
    }

    cout << ans << endl;
    return 0;
}