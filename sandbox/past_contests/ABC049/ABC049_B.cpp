#include <iostream>
using namespace std;

int H, W;
char C[110][110];

int main() {
    cin >> H >> W;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> C[i][j];
        }
    }

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cout << C[i][j];
        }
        cout << endl;
        for (int j = 0; j < W; ++j) {
            cout << C[i][j];
        }
        cout << endl;
    }
    return 0;
}