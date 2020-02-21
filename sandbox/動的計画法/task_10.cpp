#include <iostream>
#include <vector>
using namespace std;

const int NMAX = 100010;

int main() {
    int N;
    cin >> N;

    int A[NMAX], B[NMAX], C[NMAX];
    for (int i = 1; i <= N; ++i) cin >> A[i] >> B[i] >> C[i];

    long long dp[NMAX][3] = {0};
    for (int i = 1; i <= N; ++i) {
        dp[i][0] = max(dp[i][0], dp[i - 1][1] + A[i]);
        dp[i][0] = max(dp[i][0], dp[i - 1][2] + A[i]);

        dp[i][1] = max(dp[i][1], dp[i - 1][0] + B[i]);
        dp[i][1] = max(dp[i][1], dp[i - 1][2] + B[i]);

        dp[i][2] = max(dp[i][2], dp[i - 1][0] + C[i]);
        dp[i][2] = max(dp[i][2], dp[i - 1][1] + C[i]);
    }

    long long ans = 0;
    for (int i = 0; i < 3; ++i) {
        ans = max(ans, dp[N][i]);
    }

    cout << ans << endl;
    return 0;
}