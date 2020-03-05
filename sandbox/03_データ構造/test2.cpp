#include <iostream>
#include <map>
#include <queue>
using namespace std;

int main() {
    int N, L, P;
    cin >> N >> L >> P;

    map<int, int> gs;
    for (int i = 0; i < N; ++i) {
        int p, q;
        cin >> p >> q;
        gs.insert(make_pair(p, q));
    }

    priority_queue<int> pq;
    int cnt = 0;
    for (int i = 1; i < L; ++i) {

        // ガソリンスタンドがあったら給油候補としてキューに入れる
        if (gs.count(i) != 0) pq.push(gs[i]);

        --P;
        if (P == 0) {
            if (pq.size() == 0) {
                cout << -1 << endl;
                return 0;
            }
            P = pq.top();
            pq.pop();
            ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}