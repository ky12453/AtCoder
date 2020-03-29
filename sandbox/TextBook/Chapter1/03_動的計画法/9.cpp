// 蟻本P62
// ナップザック問題を解答

#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 110;
const int V_MAX = 10010;
const int INF = 1<<29;
int dp[N_MAX][V_MAX];

int main() {
    int N, W;
    cin >> N >> W;

    int weight[N], value[N];
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    for (int i = 0; i < N_MAX; ++i) {
        for (int j = 0; j < V_MAX; ++j) {
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= N * 100; ++j) {
            if (j >= value[i]) {
                dp[i + 1][j] = min(dp[i][j], dp[i][j - value[i]] + weight[i]);
            } else {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    int res = 0;
    for (int i = 0; i <= N * 100; ++i) {
        if (dp[N][i] <= W) res = i;
    }

    cout << res << endl;
    return 0;


}