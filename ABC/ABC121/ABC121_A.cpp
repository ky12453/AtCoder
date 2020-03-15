#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    int hh, ww;
    cin >> hh >> ww;

    int area[H][W];
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            area[i][j] = 0;
            if (i < hh || j < ww) area[i][j] = 1;
        }
    }

    int ans = 0;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (area[i][j] == 0) ++ans;
        }
    }

    cout << ans << endl;
    return 0;
}