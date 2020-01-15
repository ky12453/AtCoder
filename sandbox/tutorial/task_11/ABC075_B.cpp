#include <iostream>
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

    string ans[h][w];
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {

            // 値が . の場合は周囲の # の数をカウント
            int cnt = 0;
            if (s[i][j] == ".") {

                // 注目座標の周囲8方向で隣接している座標を探索
                for (int k = -1; k <= 1; ++k) {
                    for (int l = -1; l <= 1; ++l) {

                        // 探索座標が枠内であること
                        if (i + k >= 0 && i + k < h && j + l >= 0 && j + l < w) {
                            if (s[i + k][j + l] == "#") cnt++;
                        }
                    }
                }

                ans[i][j] = to_string(cnt);
            } else {
                ans[i][j] = "#";
            }
        }
    }

    for (int i = 0; i < h; ++i) {
        string buf = "";
        for (int j = 0; j < w; ++j) {
            buf += ans[i][j];
        }
        
        cout << buf << endl;
    }
}