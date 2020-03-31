// 蟻本P63
// 最長増加部分列問題を解答

#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 1010;
int dp[N_MAX];

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) cin >> A[i];

    for (int i = 0; i < N; ++i) {
        dp[i] = 1;
        for (int j = 0; j < i; ++j) {
            if (A[i] > A[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    cout << dp[N - 1] << endl;
    return 0;
}
