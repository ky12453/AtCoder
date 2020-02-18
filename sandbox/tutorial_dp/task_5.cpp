#include <iostream>
using namespace std;

int N, A;
int B[10010];

int main() {
    cin >> N >> A;
    for (int i = 0; i < N; ++i) cin >> B[i];

    int dp[110][10010] = {0};
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= A; ++j) {
            if (j >= B[i]) {
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j - B[i]] + 1);
            } else {
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
            }
        }
    }

    int ans = 100;
    for (int i = 0; i <= N; ++i) {
        if ( dp[i][A] >= 1) {
            ans = min(ans, dp[i][A]);
        }
    }

    cout << ans << endl;
    return 0;
}