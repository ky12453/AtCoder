#include <iostream>
using namespace std;

const int NMAX = 110;
const int WMAX = 100010;
long long dp[NMAX][WMAX] = {0};

int main() {
    int N, W;
    cin >> N >> W;

    int weight[NMAX], value[NMAX];
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= W; ++j) {
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
            if (j >= weight[i]) dp[i + 1][j] = max(dp[i + 1][j], dp[i][j - weight[i]] + value[i]);
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}