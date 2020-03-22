// 個数制限なしナップサック問題

#include <bits/stdc++.h>
using namespace std;

const int NMAX = 110;
const int MMAX = 10010;
int dp[NMAX][MMAX];

int main() {
    int N, W;
    cin >> N >> W;

    int weight[N], value[N];
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    for (int i = 0; i < NMAX; ++i) {
        for (int j = 0; j < MMAX; ++j) {
            dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= W; ++j) {
            // dp[i][j] = max(dp[i][j], dp[i - 1][j]);
            for (int k = 0; k * weight[i - 1] <= j; ++k) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - k * weight[i - 1]] + k * value[i - 1]);
            }
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}