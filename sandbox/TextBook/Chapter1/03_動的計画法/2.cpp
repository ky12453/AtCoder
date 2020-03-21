// 最長共通部分列問題

#include <bits/stdc++.h>
using namespace std;

const int NMAX = 1010;
int dp[NMAX][NMAX];

int main() {
    int N, M;
    cin >> N >> M;

    string s, t;
    cin >> s;
    cin >> t;

    for (int i = 0; i < NMAX; i++) {
        for (int j = 0; j < NMAX; j ++) {
            dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
            dp[i][j] = max(dp[i][j], dp[i][j - 1]);
            if (s[i - 1] == t[j - 1]) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1] + 1);
            }
        }
    }

    cout << dp[N][M] << endl;
    return 0;
}

