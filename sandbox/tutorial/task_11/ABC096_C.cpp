#include <iostream>
#include <string>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    string s[h][w];
    for (int i = 0; i < h; ++i) {
        string str;
        cin >> str;
        for (int j = 0; j < w; ++j) {
            s[i][j] = str[j];
        }
    }

    string ans = "Yes";
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {

            bool check;
            if (s[i][j] == "#") {
                check = false;

                // 対象座標の周囲4方位で少なくとも1以上 # が存在するかチェック
                if (i - 1 >= 0 && s[i - 1][j] == "#") check = true;
                if (j - 1 >= 0 && s[i][j - 1] == "#") check = true;
                if (j + 1 < w && s[i][j + 1] == "#") check = true;
                if (i + 1 < h && s[i + 1][j] == "#") check = true;

                if (check == false) {
                    ans = "No";
                }

            }
        }
    }

    cout << ans << endl;
}