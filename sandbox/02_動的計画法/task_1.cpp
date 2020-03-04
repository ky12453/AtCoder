#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> A(10010, 0);

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> A[i];

    vector<int> dp(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        dp[i + 1] = max(dp[i], dp[i] + A[i]);
    }

    cout << dp[N] << endl;
    return 0;
}