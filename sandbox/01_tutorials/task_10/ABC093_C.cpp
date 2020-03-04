#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> t;
    for (int i = 0; i < 3; ++i) {
        int tmp;
        cin >> tmp;
        t.push_back(tmp);
    }

    int ans = 0;

    while (true) {

        // ソートして、重複する値を削除する
        sort(t.begin(), t.end());
        t.erase(unique(t.begin(), t.end()), t.end());

        // A, B, Cが全て等しい場合
        if (t.size() == 1) break;

        // A, B, Cの内2つが等しい場合
        if (t.size() == 2) {

            // 2つの値の差が偶数の場合
            if ((t[1] - t[0]) % 2 == 0) {
                ans += (t[1] - t[0]) / 2;
                t[0] = t[1];
            }
            // 2つの値の差が奇数の場合
            else {
                ans += (t[1] - t[0] + 1) / 2 + 1;
                t[1] += 1;
                t[0] = t[1];
            }
            continue;
        }

        // A, B, C全て異なる場合
        if (t.size() == 3) {
            int tmp = t[2] - t[1];
            ans += tmp;
            t[0] += tmp;
            t[1] += tmp;
            continue;
        }
    }

    cout << ans << endl;
}