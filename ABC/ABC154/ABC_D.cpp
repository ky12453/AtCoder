#include <iostream>
#include <map>
#include<iomanip>
using namespace std;

int main() {
    int K, N;
    cin >> N >> K;

    int P[N];
    for (int i = 0; i < N; ++i) cin >> P[i];

    // 初期の部分合計を算出
    int sum = 0;
    int start = 0;
    for (int i = 0; i < K; ++i) sum += P[i];

    // 最大の部分合計をしゃくとり法で算出
    for (int i = 1; i <= N - K; ++i) {
        int t = sum - P[i - 1] + P[i + K - 1];
        if (t > sum) {
            sum = t;
            start = i;
        }
    }

    map<int, double> bucket;
    int ps = 0;
    for (int i = 1; i <= 1000; ++i) {
        ps += i;
        bucket.insert(make_pair(i, (double)ps/i));
    }

    // 最大の部分の期待値算出
    double ans = 0;
    for (int i = start; i < start + K; ++i) {
        ans += bucket[P[i]];
    }

    cout << fixed << setprecision(12) << ans << endl;
    return 0;
}