// 蟻本P53
// ナップサック問題をメモ化再帰により解答

#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 110;
const int W_MAX = 10010;
int N, W;
int weight[N_MAX], value[N_MAX], dp[N_MAX][W_MAX];

int rec(int i, int j) {
    // 探索済の場合は、メモ用配列の値を返却
    if (dp[i][j] >= 0) {
        return dp[i][j];
    }

    // 品物が残っていない場合
    if (i == N) {
        return 0;
    }

    int res;
    if (j < weight[i]) {
        res = rec(i + 1, j);
    } else {
        res = max(rec(i + 1, j), rec(i + 1, j - weight[i]) + value[i]);
    }

    return dp[i][j] = res;
}

int main() {
    cin >> N >> W;
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    // メモ用配列を初期化
    for (int i = 0; i < N_MAX; ++i) {
        for (int j = 0; j < W_MAX; ++j) {
            dp[i][j] = -1;
        }
    }

    cout << rec(0, W) << endl;
    return 0;
}
