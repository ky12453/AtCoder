// 蟻本P57
// 個数制限なしナップサック問題の偽解答

#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 110;
const int M_MAX = 10010;
int dp[N_MAX][M_MAX];

int main() {
    int N, W;
    cin >> N >> W;

    int weight[N], value[N];
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= W; ++j) {
            for (int k = 0; k * weight[i] <= j; ++k) {
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j - k * weight[i]] + k * value[i]);
            }
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}