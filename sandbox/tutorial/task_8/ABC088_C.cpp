#include <iostream>
#include <string>
using namespace std;

int main() {
    // パラメータ入力
    int c[3][3];
    cin >> c[0][0] >> c[0][1] >> c[0][2];
    cin >> c[1][0] >> c[1][1] >> c[1][2];
    cin >> c[2][0] >> c[2][1] >> c[2][2];

    // a1を0と仮定した場合のその他のパラメータの数値
    int a[3], b[3];
    a[0] = 0;
    b[0] = c[0][0] - a[0];
    b[1] = c[0][1] - a[0];
    b[2] = c[0][2] - a[0];
    a[1] = c[1][0] - b[0];
    a[2] = c[2][0] - b[0];

    // グリッドを全探索して整合性の確認
    string res = "Yes";
    for (int x = 0; x < 3; ++x) {
        for (int y = 0; y < 3; ++y) {
            if (c[x][y] != a[x] + b[y]) res = "No";
        }
    }

    cout << res << endl;
}