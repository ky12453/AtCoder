#include <iostream>
#include <cmath>
using namespace std;

const int INF = 1 << 29;

int N;
int H[100010];

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> H[i];

    int dp[100010];
    for (int i = 0; i < 100010; ++i) dp[i] = INF;
    dp[0] = 0;

    for (int i = 1; i < N; ++i) {
        dp[i] = min(dp[i], dp[i - 1] + abs(H[i] - H[i - 1]));
        if (i >= 2) dp[i] = min(dp[i], dp[i - 2] + abs(H[i] - H[i - 2]));
    }

    cout << dp[N - 1] << endl;
    return 0;
}