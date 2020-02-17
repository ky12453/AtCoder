#include <iostream>
using namespace std;

int N, A;
int B[110];

int main() {
    cin >> N >> A;
    for (int i = 0; i < N; ++i) cin >> B[i];

    int dp[110][10010] = {0};
    dp[0][0] = 1;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= A; ++j) {
            if (j >= B[i]) {
                dp[i + 1][j] += dp[i][j];
                dp[i + 1][j] += dp[i][j - B[i]];
            } else {
                dp[i + 1][j] += dp[i][j];
            }
        }
    }

    long long ans;
    int prv = 0;
    for (int i = 0; i <= N; ++i) {
        if (prv != dp[i][A]) {
            ans = (ans + dp[i][A] - prv) % 1000000009;
        }
        prv = dp[i][A];
    }

    cout << ans << endl;
    return 0;
}