#include <iostream>
using namespace std;

int N, W;
int VALUE[110], WEIGHT[110];

int main() {
    cin >> N >> W;
    for (int i = 0; i < N; ++i) cin >> VALUE[i] >> WEIGHT[i];

    int dp[110][10010] = {0};
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= W; ++j) {
            if (j >= WEIGHT[i]) {
                dp[i + 1][j] = max(dp[i][j], dp[i][j - WEIGHT[i]] + VALUE[i]);
            } else {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}