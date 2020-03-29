// 蟻本P62
// 個数制限付き部分和問題の偽解法

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
            dp[i][j] = false;
        }
    }
    dp[0][0] = true;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= K; ++j) {
            for (int k = 0; k * A[i] <= j && k <= M[i]; ++k) {
                dp[i + 1][j] |= dp[i][j - k * A[i]];
            }
        }
    }

    if (dp[N][K]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}