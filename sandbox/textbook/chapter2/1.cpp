#include <iostream>
#include <vector>
using namespace std;

// DFSでの解法
/*
int N, K, A[30];

bool dfs(int i, int sum) {
    // 配列の最後尾+1まで探査したら条件を確認
    if (i == N) return sum == K;

    // a[i]を使用する場合
    if (dfs(i + 1, sum + A[i])) return true;

    // a[i]を使用しない場合
    if (dfs(i + 1, sum)) return true;

    return false;
}

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; ++i) cin >> A[i];

    if (dfs(0, 0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
*/

// bit全探索で解答
int N, K, A[30];

vector<int> IntegerToVector(int bit) {
    vector<int> s;
    for (int i = 0; i < N; ++i) {
        if (bit & (1<<i)) s.push_back(i);
    }

    return s;
}

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; ++i) cin >> A[i];

    string ans = "No";
    for (int bit = 0; bit < (1 << N); ++bit) {
        vector<int> s;
        s = IntegerToVector(bit);

        int sum = 0;
        for (int i : s) sum += A[i];

        if (sum == K) ans = "Yes";
    }

    cout << ans << endl;
    return 0;
}