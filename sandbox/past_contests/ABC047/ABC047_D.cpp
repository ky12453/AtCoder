#include <iostream>
#include <map>
using namespace std;

int N, T;
int A[100010];

int main() {
    cin >> N >> T;
    for (int i = 0; i < N; ++i) cin >> A[i];

    int m = A[0];
    map<int, int, greater<int>> bucket;
    for (int i = 1; i < N; ++i) {
        m = min(m, A[i]);
        int cost = A[i] - m;

        auto itr = bucket.find(cost);
        if (itr != bucket.end()) {
            bucket[cost] = bucket[cost] + 1;
        } else {
            bucket.insert(make_pair(cost, 1));
        }
    }

    cout << bucket.begin()->second << endl;
    return 0;
}
