#include <iostream>
#include <vector>
using namespace std;
const long long INF = 1LL << 60;

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

    long long m = -INF;
    for (int i = 0; i <= N - K; ++i) {
        m = max(m, (long long)s[i + K] - s[i]);
    }

    cout << m << endl;
    return 0;
}