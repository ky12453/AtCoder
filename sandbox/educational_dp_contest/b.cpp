#include <iostream>
#include <cmath>
using namespace std;

template<class T> inline bool chmax(T&a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T&a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main() {
    int n, k;
    cin >> n >> k;

    long long h[n];
    for (int i = 0; i < n; ++i) cin >> h[i];

    long long dp[n];
    for (int i = 0; i < n; ++i) dp[i] = INF;
    dp[0] = 0;
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            if (i > j) chmin(dp[i], dp[i - j - 1] + abs(h[i] - h[i - j - 1]));
        }
    }

    cout << dp[n - 1] << endl;
    return 0;
}