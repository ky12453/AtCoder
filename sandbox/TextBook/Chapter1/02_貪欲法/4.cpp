// Saruman’s Army(POJ No.3069)を解答

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, R;
    cin >> N >> R;

    vector<int> X(N);
    for (int i = 0; i < N; ++i) cin >> X[i];

    // 左端の印をつける位置を決定する
    int pt = 0;
    int cnt = 1;
    for (int i = 1; i < N; ++i) {
        if (X[0] + R < X[i]) {
            break;
        }
        else {
            pt = i;
        }
    }

    // 印をつける位置を決定
    while (X[pt] + R < X[N - 1]) {
        for (int i = pt + 1; i < N; ++i) {
            if (X[pt] + R < X[i]) {
                pt = i;
                cnt++;
                break;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}