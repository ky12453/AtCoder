// 蟻本P52
// ナップサック問題を愚直な方法で解答

#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 110;
int N, W;
int weight[N_MAX], value[N_MAX];

int rec(int i, int j) {
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

    return res;
}

int main() {
    cin >> N >> W;
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    cout << rec(0, W) << endl;
    return 0;
}