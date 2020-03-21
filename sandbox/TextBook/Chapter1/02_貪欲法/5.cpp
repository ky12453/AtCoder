// Fence Repair(POJ No.3253)を解答

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    priority_queue<int> L;
    for (int i = 0; i < N; ++i) {
        int t;
        cin >> t;
        L.push(-1 * t);
    }

    long long cost = 0;
    while (N != 1) {
        int min1 = -1 * L.top();
        L.pop();
        int min2 = -1 * L.top();
        L.pop();

        int t = min1 + min2;
        cost += t;
        L.push(-1 * t);
        N--;
    }

    cout << cost << endl;
    return 0;
}