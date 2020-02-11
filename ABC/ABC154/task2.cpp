#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int N = 100000;
int Q;
int L[100010], R[100010];

bool IsPrime(int p) {
    bool flg = true;
    for (int i = 2; i <= (int)sqrt(p); ++i) {
        if (p % i == 0) flg = false;
    }

    return flg;

}

int main() {
    cin >> Q;
    for (int i = 0; i < Q; ++i) cin >> L[i] >> R[i];

    // Nまでの素数を取得
    // 素数の場合は、該当要素を1にする
    vector<int> p(N, 0);
    for (int i = 2; i <= N; ++i) {
        if (IsPrime(i)) p[i] = 1;
    }

    // 2017に似た数を取得する
    // 似た数は、該当要素を2にする
    for (int i = 2; i <= N; ++i) {

        if (p[i] == 1) {
            int t = (i + 1) / 2;

            if (p[t] >= 1) {
                p[i] = 2;
            }
        }
    }

    // 累積和を算出する
    vector<int> s(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        if (p[i] == 2) {
            s[i + 1] = s[i] + 1;
        } else {
            s[i + 1] = s[i];
        }
    }

    // 条件に合致する要素を検索する
    for (int i = 0; i < Q; ++i) {
        if (L[i] == R[i]) {
            cout << s[R[i] + 1] - s[L[i]] << endl;
        } else {
            cout << s[R[i]] - s[L[i]] << endl;
        }
    }

    return 0;
}