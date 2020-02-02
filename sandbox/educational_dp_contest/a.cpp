#include <iostream>
#include <cmath>
using namespace std;

template<class T> inline bool chmax(T&a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T&a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

// 貰うDPでの実装
/*
int main() {
    int n;
    cin >> n;

    long long h[n];
    for (int i = 0; i < n; ++i) cin >> h[i];

    long long dp[n];
    for (int i = 0; i < n; ++i) dp[i] = INF;
    dp[0] = 0;
    for (int i = 1; i < n; ++i) {
        chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if (i > 1) chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }

    cout << dp[n - 1] << endl;
    return 0;
}
*/

// 配るDPでの実装
int main() {
    int N;
    cin >> N;

    long long H[N];
    for (int i = 0; i < N; ++i) cin >> H[i];

    long long dp[N];
    for (int i = 0; i < N; ++i) dp[i] = INF;
    dp[0] = 0;

    for (int i = 0; i < N; ++i) {
        if (i < (N - 1)) {
            chmin(dp[i + 1], dp[i] + abs(H[i] - H[i + 1]));
        }

        if (i < (N - 2)) {
            chmin(dp[i + 2], dp[i] + abs(H[i] - H[i + 2]));
        }
    }

    cout << dp[N - 1] << endl;
    return 0;
}