//

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll dp[110][100010];

int main() {
    int N, W;
    cin >> N >> W;

    ll weight[N], value[N];
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    for (int i = 0; i < 110; ++i) {
        for (int j = 0; j < 100010; ++j) {
            dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= W; ++j) {
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
            if (j >= weight[i - 1]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - weight[i - 1]] + value[i - 1]);
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i <= 100010; ++i) {
        ans = max(ans, dp[N][i]);
    }

    cout << ans << endl;
    return 0;
}