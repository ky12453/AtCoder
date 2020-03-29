#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, A, B, C;
    cin >> X >> Y >> A >> B >> C;

    vector<int> P(A), Q(B), R(C);
    for (int i = 0; i < A; ++i) cin >> P[i];
    for (int i = 0; i < B; ++i) cin >> Q[i];
    for (int i = 0; i < C; ++i) cin >> R[i];

    sort(P.begin(), P.end(), greater<int>());
    sort(Q.begin(), Q.end(), greater<int>());

    priority_queue<int> PP;
    for (int i = 0; i < X; ++i) {
        PP.push(-1 * P[i]);
    }

    priority_queue<int> PQ;
    for (int i = 0; i < Y; ++i) {
        PQ.push(-1 * Q[i]);
    }

    for (int i = 0; i < C; ++i) {
        if ((-1 * PP.top()) >= (-1 * PQ.top())) {
            if ((-1 * PQ.top()) < R[i]) {
                PQ.pop();
                PQ.push(-1 * R[i]);
            }
        } else {
            if ((-1 * PP.top()) < R[i]) {
                PP.pop();
                PP.push(-1 * R[i]);
            }
        }
    }

    long long ans = 0;
    while (!PP.empty()) {
        ans = (-1 * PP.top()) + ans;
        PP.pop();
    }

    while (!PQ.empty()) {
        ans = (-1 * PQ.top()) + ans;
        PQ.pop();
    }

    cout << ans << endl;
    return 0;
}