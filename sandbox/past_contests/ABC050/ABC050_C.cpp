#include <iostream>
using namespace std;

int N;
int A[100010];
int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> A[i];

    int bucket[100010] = {0};
    for (int i = 0; i < N; ++i) {
        bucket[A[i]] += 1;
    }

    bool possible = true;
    if (N % 2 == 0) {
        for (int i = 0; i < N; ++i) {
            if (i == 0) {
                if (bucket[i] != 0) possible = false;
            } else if (i % 2 == 0) {
                if (bucket[i] != 0) possible = false;
            } else {
                if (bucket[i] != 2) possible = false;
            }
        }
    } else {
        for (int i = 0; i < N; ++i) {
            if (i == 0) {
                if (bucket[i] != 1) possible = false;
            } else if (i % 2 == 0) {
                if (bucket[i] != 2) possible = false;
            } else {
                if (bucket[i] != 0) possible = false;
            }
        }
    }

    long long ans = 1LL;
    int nn = N / 2;
    if (possible) {
        for (int i = 1; i <= nn; ++i) {
            ans *= 2;
            ans %= 1000000007;
        }
    } else {
        ans = 0;
    }

    cout << ans << endl;
    return 0;
}