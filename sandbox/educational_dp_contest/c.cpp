#include <iostream>
using namespace std;

template<class T> inline bool chmax(T&a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T&a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n;
    cin >> n;

    int a[n], b[n], c[n];
    for (int i = 0; i < n; ++i) cin >> a[i] >> b[i] >> c[i];

    int dp[n][3];
    for (int i = 0; i < n; ++i) {
        dp[i][0] = 0;
        dp[i][1] = 0;
        dp[i][2] = 0;
    }

    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (j == 0) {
                chmax(dp[i][0], dp[i - 1][1] + a[i]);
                chmax(dp[i][0], dp[i - 1][2] + a[i]);
            }

            if (j == 1) {
                chmax(dp[i][1], dp[i - 1][0] + b[i]);
                chmax(dp[i][1], dp[i - 1][2] + b[i]);
            }

            if (j == 2) {
                chmax(dp[i][2], dp[i - 1][0] + c[i]);
                chmax(dp[i][2], dp[i - 1][1] + c[i]);
            }
        }
    }

    int ans = max(dp[n - 1][0], dp[n - 1][1]);
    ans = max(ans, dp[n - 1][2]);

    cout << ans << endl;
    return 0;
}