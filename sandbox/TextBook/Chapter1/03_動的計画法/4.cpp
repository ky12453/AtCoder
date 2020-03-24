// 蟻本P56
// 最長共通部分列問題を解答

#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 1010;
int dp[N_MAX][N_MAX];

int main() {
    int N, M;
    cin >> N >> M;
    
    char s[N], t[M];
    for (int i = 0; i < N; ++i) cin >> s[i];
    for (int i = 0; i < M; ++i) cin >> t[i];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (s[i + 1] == t[j + 1]) {
                dp[i + 1][j + 1] = dp[i][j] + 1;
            } else {
                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }

    cout << dp[N][M] << endl;
    return 0;
}