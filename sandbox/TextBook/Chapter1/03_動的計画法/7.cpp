// 蟻本P57
// ナップサック問題を配列再利用したDPで解答

#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 110;
const int W_MAX = 10010;
int N, W;
int weight[N_MAX], value[N_MAX], dp[0][W_MAX];

int main() {
    cin >> N >> W;
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    for (int i = 0; i < N; ++i) {
        for (int j = W; j >= 0; --j) {
            if (j >= weight[i]) {
                dp[0][j] = max(dp[0][j], dp[0][j - weight[i]] + value[i]);
            } else {
                dp[0][j] = dp[0][j];
            }
        }
    }

    cout << dp[0][W] << endl;
    return 0;
}
