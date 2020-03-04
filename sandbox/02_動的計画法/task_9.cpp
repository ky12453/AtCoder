#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int NMAX = 100010;
const long long INF = 1LL << 60;

int N, K;
vector<int> H(NMAX);

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; ++i) cin >> H[i];

    // dp配列を初期化
    vector<long long> dp(NMAX, INF);
    dp[0] = 0;

    // dp配列を緩和
    for (int i = 1; i < N; ++i) {
        for (int j = 1; j <= K; ++j) {
            if (i >= j) {
                dp[i] = min(dp[i], dp[i - j] + abs(H[i] - H[i - j]));
            }
        }
    }

    cout << dp[N - 1] << endl;
    return 0;
}