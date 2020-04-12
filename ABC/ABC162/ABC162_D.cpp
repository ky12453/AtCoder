#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    char S[N]; for (int i = 0; i < N; ++i) cin >> S[i];

    int r[N], g[N], b[N];
    int sr = 0;
    int sg = 0;
    int sb = 0;
    for (int i = 0; i < N; ++i) {
        if (S[i] == 'R') sr++;
        if (S[i] == 'G') sg++;
        if (S[i] == 'B') sb++;
        r[i] = sr;
        g[i] = sg;
        b[i] = sb;
    }

    ll res = 0;
    for (int i = 0; i < N - 2; ++i) {
        char refi = S[i];
        for (int j = i + 1; j < N - 1; ++j) {
            char refj = S[j];
            if (refj != refi) {
                if (refi == 'R') {
                    if (refj == 'G') {
                        res += sb - b[j];
                        int t = 2 * j - i;
                        if (t < N) {
                            if (S[t] == 'B') res--;
                        }
                    } else {
                        res += sg - g[j];
                        int t = 2 * j - i;
                        if (t < N) {
                            if (S[t] == 'G') res--;
                        }
                    }
                } else if (refi == 'G') {
                    if (refj == 'B') {
                        res += sr - r[j];
                        int t = 2 * j - i;
                        if (t < N) {
                            if (S[t] == 'R') res--;
                        }
                    } else {
                        res += sb - b[j];
                        int t = 2 * j - i;
                        if (t < N) {
                            if (S[t] == 'B') res--;
                        }
                    }
                } else if (refi == 'B') {
                    if (refj == 'R') {
                        res += sg - g[j];
                        int t = 2 * j - i;
                        if (t < N) {
                            if (S[t] == 'G') res--;
                        }
                    } else {
                        res += sr - r[j];
                        int t = 2 * j - i;
                        if (t < N) {
                            if (S[t] == 'R') res--;
                        }
                    }
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}