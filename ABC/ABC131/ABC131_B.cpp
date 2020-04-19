#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 29;

int main() {
    int N, L; cin >> N >> L;
    
    int m = abs(L + 1 - 1);
    int sum = 0, idx = 1;
    for (int i = 1; i <= N; ++i) {
        int t = L + i - 1;
        sum += t;
        if (m > abs(t)) {
            m = abs(t);
            idx = i;
        }
    }

    cout << sum - (L + idx - 1) << endl;
    return 0;
}