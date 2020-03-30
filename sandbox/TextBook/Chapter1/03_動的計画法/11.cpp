// 蟻本P62
// 個数制限付き部分和問題を解答

#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 110;
const int K_MAX = 100010;
bool dp[N_MAX][K_MAX];

int main() {
    int N, K;
    cin >> N >> K;

    int A[N], M[N];
    for (int i = 0; i < N; ++i) cin >> A[i] >> M[i];

    for (int i = 0; i < N_MAX; ++i) {
        for (int j = 0; j < K_MAX; ++j) {
            dp[i][j] = -1;
        }
    }
    dp[0][0] = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= K; ++j) {
            if (dp[i][j] >= 0) {
                dp[i + 1][j] = M[i];
            } else if (j < A[i] || dp[i + 1][j - A[i]] <= 0) {
                dp[i + 1][j] = -1;
            } else {
                dp[i + 1][j] = dp[i + 1][j - A[i]] - 1;
            }
        }
    }

    if (dp[N][K] >= 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}