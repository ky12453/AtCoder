#include <iostream>
using namespace std;

int INF = 1<<29;

int N, K, A;
int B[510];
int dp[510][10010];

int main() {
    cin >> N >> K >> A;
    for (int i = 0; i < N; ++i) cin >> B[i];

    for (int i = 0; i < 510; ++i) {
        for (int j = 0; j < 10010; ++j) {
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= A; ++j) {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            if (j >= B[i]) {
                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - B[i]] + 1);
            }
        }
    }

    bool flg = false;
    for (int i = 0; i <= N; ++i) {
        if (dp[i][A] <= K) {
            flg = true;
            break;
        }
    }

    if (flg) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}