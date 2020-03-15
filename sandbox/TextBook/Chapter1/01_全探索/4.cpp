// 部分和問題

#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int N, K, A[25];

bool dfs(int s, int c) {
    if (c == N) {
        if (s == K) return true;
        return false;
    }   
    return dfs(s + A[c], c + 1) || dfs(s, c + 1);
}

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; ++i) cin >> A[i];

    if (dfs(0, 0)) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}