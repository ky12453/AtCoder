// 部分和問題

#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int N, K, A[25];

bool dfs(int s, int c) {
    if (c == N) return s == K;

    // A[i]を使う場合
    if (dfs(s + A[c], c + 1)) return true;

    // A[i]を使わない場合
    if (dfs(s, c + 1)) return true;

    return false;
}

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; ++i) cin >> A[i];

    if (dfs(0, 0)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}