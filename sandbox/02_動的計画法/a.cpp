#include <iostream>
#include <set>
using namespace std;

int dp[110][10010] = {0};

int main() {
    int N;
    cin >> N;

    int p[110];
    for (int i = 0; i < N; ++i) cin >> p[i];

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= 10000; ++j) {
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
            if (j >= p[i - 1]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - p[i - 1]] + p[i - 1]);
            }
        }
    }

    set<int> st;
    for (int i = 0; i <= 10000; ++i) {
        st.insert(dp[N][i]);
    }

    cout << st.size() << endl;
    return 0;
}