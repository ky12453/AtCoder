#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1000000007;
ll dp[100010][13];

int main() {
    string s; cin >> s;
    reverse(s.begin(), s.end());

    for (int i = 0; i < 100010; ++i) {
        for (int j = 0; j < 13; ++j) {
            dp[i][j] = 0;
        }
    }

    dp[0][0] = 1;
    int digit = 1;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '?') {
            for (int j = 0; j < 13; ++j) {
                for (int k = 0; k < 10; ++k) {
                    // dp[i + 1][(j * 10 + k) % 13] += dp[i][j];
                    // dp[i + 1][(j * 10 + k) % 13] %= MOD;
                    dp[i + 1][(j + digit * k) % 13] += dp[i][j];
                    dp[i + 1][(j + digit * k) % 13] %= MOD;
                }
            }
        } else {
            for (int j = 0; j < 13; ++j) {
                int k = s[i] - '0';
                // dp[i + 1][(j * 10 + k) % 13] += dp[i][j];
                // dp[i + 1][(j * 10 + k) % 13] %= MOD;
                dp[i + 1][(j + digit * k) % 13] += dp[i][j];
                dp[i + 1][(j + digit * k) % 13] %= MOD;
            }
        }
        digit *= 10;
        digit %= 13;
    }

    cout << dp[s.size()][5] << endl;
    return 0;
}