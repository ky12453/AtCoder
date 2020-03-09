#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;
const int INF = 1 << 29;

int main() {
    int A, B, M;
    cin >> A >> B >> M;

    vector<int> reiz(A);
    vector<int> renj(B);
    int x[100010], y[100010], c[100010];
    for (int i = 0; i < A; ++i) cin >> reiz[i];
    for (int i = 0; i < B; ++i) cin >> renj[i];
    for (int i = 0; i < M; ++i) cin >> x[i] >> y[i] >> c[i];

    // 割引券を使う場合
    int ans = INF;
    for (int i = 0; i < M; ++i) {
        int t = reiz[x[i] - 1] + renj[y[i] - 1] - c[i];
        ans = min(ans, t);
    }

    // 割引券を使わない場合
    sort(reiz.begin(), reiz.end());
    sort(renj.begin(), renj.end());
    ans = min(ans, reiz[0] + renj[0]);

    cout << ans << endl;
    return 0;
}