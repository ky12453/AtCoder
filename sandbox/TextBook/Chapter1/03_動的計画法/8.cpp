// 蟻本P59
// 個数制限なしナップサック問題を配列再利用して解答

#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 110;
const int M_MAX = 10010;
int dp[M_MAX];

int main() {
    int N, W;
    cin >> N >> W;

    int weight[N], value[N];
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= W; ++j) {
            if (j >= weight[i]) {
                dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
            } else {
                dp[j] = dp[j];
            }
        }
    }

    cout << dp[W] << endl;
    return 0;
}