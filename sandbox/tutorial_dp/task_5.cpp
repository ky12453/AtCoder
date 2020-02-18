#include <iostream>
using namespace std;

const int INF = 1<<29;

int N, A;
int B[110];

int main() {
    cin >> N >> A;
    for (int i = 0; i < N; ++i) cin >> B[i];

    // dp配列を初期化
    int dp[110][10010];
    for (int i = 0; i < 110; ++i) {
        for (int j = 0; j < 10010; ++j) {
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;

    // dp配列を緩和
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= A; ++j) {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            if (j >= B[i]) dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - B[i]] + 1);
        }
    }

    if (dp[N][A] == INF) {
        cout << -1 << endl;
    } else {
        cout << dp[N][A] << endl;
    }
    return 0;
}