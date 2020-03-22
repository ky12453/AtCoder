// 蟻本P52
// ナップサック問題を愚直な方法で解答

#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 110;
int N, W;
int weight[N_MAX], value[N_MAX];

int solve(int i, int cw, int cv) {
    if (i == N) {
        return cv;
    }

    // i番目の品物を選ばない場合
    int mv = 0;
    int t = solve(i + 1, cw, cv);
    mv = max(mv, t);

    // i番目の品物を選ぶ場合
    if (cw + weight[i] <= W) {
        t = solve(i + 1, cw + weight[i], cv + value[i]);
        mv = max(mv, t);
    }

    return mv;
}

int main() {
    cin >> N >> W;
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    cout << solve(0, 0, 0) << endl;
    return 0;
}