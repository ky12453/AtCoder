#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int N = 100000;
int Q;
int L[100010], R[100010];

bool IsPrime(int p) {
    bool flg = true;
    for (int i = 2; i * i <= p; ++i) {
        if (p % i == 0) flg = false;
    }

    return flg;
}

int main() {
    cin >> Q;
    for (int i = 0; i < Q; ++i) cin >> L[i] >> R[i];

    // Nまでの素数を取得
    // 素数の場合は、該当要素を1にする
    vector<int> p(N + 1, 0);
    for (int i = 2; i <= N; ++i) {
        if (IsPrime(i)) p[i] = 1;
    }

    // 2017に似た数を取得する
    // 似た数は、該当要素を2にする
    vector<int> pp(N + 1, 0);
    for (int i = 2; i <= N; ++i) {

        // 奇数を対象とする
        if (i % 2 != 0) {
            if (p[i] == 1 && p[(i + 1) / 2] == 1) pp[i] = 1;
        }
    }

    // 累積和を算出する
    vector<int> s(N + 2, 0);
    for (int i = 0; i <= N; ++i) {
        s[i + 1] = s[i] + pp[i];
    }

    // 条件に合致する要素を検索する
    for (int i = 0; i < Q; ++i) {
        cout << s[R[i] + 1] - s[L[i]] << endl;
    }

    return 0;
}