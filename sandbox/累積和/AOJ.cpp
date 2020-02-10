#include <iostream>
#include <vector>
using namespace std;

int N, K;
vector<int> A(100010);

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; ++i) cin >> A[i];

    // 累積和を定義
    vector<int> s(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        s[i + 1] = s[i] + A[i];
    }

    int m = -1000000000;
    for (int i = 1; i <= N - K; ++i) {
        m = max(m, s[i + K] - s[i]);
    }

    cout << m << endl;
    return 0;
}