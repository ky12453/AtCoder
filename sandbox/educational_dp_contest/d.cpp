#include <iostream>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

long long dp[110][100100] = {0};

int main() {
    int N;
    long long W;
    cin >> N >> W;

    long long weight[110];
    long long value[110];
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    for (int i = 0; i < N; ++i) {
        for (int sum_w = 0; sum_w <= W; ++sum_w) {

            // i 番目の品物を選ぶ場合
            if (sum_w - weight[i] >= 0) {
                chmax(dp[i+1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
            }

            // i 番目の品物を選ばない場合
            chmax(dp[i+1][sum_w], dp[i][sum_w]);
        }
    }

    cout << dp[N][W] << endl;
}