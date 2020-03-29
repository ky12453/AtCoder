#include <bits/stdc++.h>
using namespace std;

int tb[2010][2010];
int ans[2010];

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    for (int i = 1; i <= N; ++i) {
        int t = 1;
        for (int j = i + 1; j <= N; ++j) {
            tb[i][j] = t;
            t++;
        }
    }

    for (int i = 1; i <= N; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            int t = abs(X - i) + abs(Y - j) + 1;
            tb[i][j] = min(t, tb[i][j]);
        }
    }

    // for (int i = 0; i <= N; ++i) {
    //     for (int j = 0; j <=N; ++j) {
    //         cout << tb[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= N; ++j) {
            ans[tb[i][j]] += 1;
        }
    }

    for (int i = 1; i < N; ++i) {
        cout << ans[i] << endl;
    }
    return 0;
}