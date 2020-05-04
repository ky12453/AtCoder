#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;

    int bucket[n];
    for (int i = 0; i < n; ++i) {
        bucket[i] = 0;
    }

    for (int i = 0; i < k; ++i) {
        int d; cin >> d;
        for (int j = 0; j < d; ++j) {
            int t; cin >> t;
            t--;
            bucket[t] += 1;
        }
    }

    int res = 0;
    for (int i = 0; i < n; ++i) {
        if (bucket[i] == 0) res++;
    }

    cout << res << endl;
    return 0;
}