#include <iostream>
using namespace std;

int N, A;
int B[110];

int main() {
    cin >> N >> A;
    for (int i = 0; i < N; ++i) cin >> B[i];

    int dp[110][10010];
    for (int i = 0; i < 110; ++i) {
        for (int j = 0; j < 10010; ++j) {
            dp[i][j] = false;
        }
    }

    dp[0][0] = true;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= A; ++j) {
            if (j >= B[i]) {
                dp[i + 1][j] |= dp[i][j];
                dp[i + 1][j] |= dp[i][j - B[i]];
            } else {
                dp[i + 1][j] |= dp[i][j];
            }
        }
    }

    if (dp[N][A]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}