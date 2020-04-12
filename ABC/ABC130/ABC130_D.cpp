#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N, K; cin >> N >> K;
    ll A[N]; for (int i = 0; i < N; ++i) cin >> A[i];

    ll res = 0;
    ll sum = 0;
    int right = 0;
    for (int left = 0; left < N; ++left) {
        while (right < N && sum + A[right] < K) {
            sum += A[right];
            right++;
        }

        res += N - right;

        if (right == left) {
            right++;
        } else {
            sum -= A[left];
        }
    }

    cout << res << endl;
    return 0;
}