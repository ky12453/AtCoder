#include <iostream>
using namespace std;

// バケット法による解法
// 必要メモリ: H * W * 4 = 40M
// 処理オーダ: O(H * W + N * H * W + H * W) = 10^6
/*
int main() {
    int w, h, n;
    cin >> w >> h >> n;

    const int NMAX = 110;
    int x[NMAX], y[NMAX], a[NMAX];
    for (int i = 0; i < n; ++i) cin >> x[i] >> y[i] >> a[i];

    // 面積を表すバケットを定義し、白=1、黒=0とする
    int bucket[h][w];
    for (int py = 0; py < h; ++py) {
        for (int px = 0; px < w; ++px) {
            bucket[py][px] = 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        // x < x[i]の範囲のバケットを黒=0に置き換える
        if (a[i] == 1) {
            for (int py = 0; py < h; ++py) {
                for (int px = 0; px < x[i]; ++px) {
                    bucket[py][px] = 0;
                }
            }
        }

        // x > x[i]の範囲のバケットを黒=0に置き換える
        if (a[i] == 2) {
            for (int py = 0; py < h; ++py) {
                for (int px = x[i]; px < w; ++px) {
                    bucket[py][px] = 0;
                }
            }
        }

        // y < y[i]の範囲のバケットを黒=0に置き換える
        if (a[i] == 3) {
            for (int py = 0; py < y[i]; ++py) {
                for (int px = 0; px < w; ++px) {
                    bucket[py][px] = 0;
                }
            }
        }

        // y > y[i]の範囲のバケットを黒=0に置き換える
        if (a[i] == 4) {
            for (int py = y[i]; py < h; ++py) {
                for (int px = 0; px < w; ++px) {
                    bucket[py][px] = 0;
                }
            }
        }
    }

    // バケットを線形探索で白=1の数を数え上げる
    int area = 0;
    for (int py = 0; py < h; ++py) {
        for (int px = 0; px < w; ++px) {
            if (bucket[py][px] == 1) area++;
        }
    }

    cout << area << endl;
}
*/

// 算数的な方法による解法
int main () {
    int w, h, n;
    cin >> w >> h >> n;

    const int NMAX = 110;
    int x[NMAX], y[NMAX], a[NMAX];
    for (int i = 0; i < n; ++i) cin >> x[i] >> y[i] >> a[i];

    int x_min = 0;
    int x_max = w;
    int y_min = 0;
    int y_max = h;
    for (int i = 0; i < n; ++i) {
        // x_min > x[i]の場合
        if (x_min > x[i]) {
            if (a[i] == 2) {
                x_min = 0;
                x_max = 0;
            }
        }

        // x_min <= x[i] < x_maxの場合
        if (x_min <= x[i] && x[i] < x_max) {
            if (a[i] == 1) x_min = x[i];
            if (a[i] == 2) x_max = x[i];
        }

        // x[i] >= x_maxの場合
        if (x[i] >= x_max) {
            if (a[i] == 1) {
                x_min = 0;
                x_max = 0;
            }
        }


        // y_min > y[i]の場合
        if (y_min > y[i]) {
            if (a[i] == 4) {
                y_min = 0;
                y_max = 0;
            }
        }

        // y_min <= y[i] < y_maxの場合
        if (y_min <= y[i] && y[i] < y_max) {
            if (a[i] == 3) y_min = y[i];
            if (a[i] == 4) y_max = y[i];
        }

        // y[i] >= y_maxの場合
        if (y[i] >= y_max) {
            if (a[i] == 3) {
                y_min = 0;
                y_max = 0;
            }
        }
    }

    int area = 0;
    if ((y_min == 0 && y_max == 0) || (x_min == 0 && x_max == 0)) {
        area = 0;
    } else {
        int width = x_max - x_min;
        int height = y_max - y_min;
        area = width * height;
    }
    cout << area << endl;
}