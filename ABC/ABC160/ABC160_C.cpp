#include <bits/stdc++.h>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    sort(A.begin(), A.end());
    vector<int> t(N);
    t[0] = K - A[N - 1] + A[0];
    for (int i = 1; i < N; ++i) {
        t[i] = A[i] - A[i - 1];
    }

    sort(t.begin(), t.end(), greater<int>());
    cout << K - t[0] << endl;
    return 0;
}