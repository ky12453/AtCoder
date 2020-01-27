#include <iostream>
#include <cmath>
using namespace std;

int chmin(int& a, int b) {
    if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;

    int h[n];
    for (int i = 0; i < n; ++i) cin >> h[i];

    int dp[n];
    for (int i = 0; i < n; ++i) dp[i] = 1000000000;
    dp[0] = 0;
    for (int i = 1; i < n; ++i) {
        chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if (i > 1) chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }

    cout << dp[n - 1] << endl;
    return 0;
}