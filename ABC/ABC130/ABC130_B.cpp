#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X; cin >> N >> X;
    int L[N]; for (int i = 0; i < N; ++i) cin >> L[i];

    int res = 1;
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += L[i];
        if (X >= sum) res++;
    }

    cout << res << endl;
    return 0;
}