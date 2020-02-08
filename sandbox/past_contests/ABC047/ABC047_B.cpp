#include <iostream>
using namespace std;

int W, H, N;
int X[110], Y[110], A[110];
int AREA[110][110] = {0};

int main() {
    cin >> W >> H >> N;
    for (int i = 0; i < N; ++i) cin >> X[i] >> Y[i] >> A[i];

    for (int i = 0; i < N; ++i) {

        if (A[i] == 1) {
            for (int j = 0; j < X[i]; ++j) {
                for (int k = 0; k < H; ++k) {
                    AREA[j][k] = 1;
                }
            }
        }

        if (A[i] == 2) {
            for (int j = X[i]; j < W; ++j) {
                for (int k = 0; k < H; ++k) {
                    AREA[j][k] = 1;
                }
            }
        }

        if (A[i] == 3) {
            for (int j = 0; j < W; ++j) {
                for (int k = 0; k < Y[i]; ++k) {
                    AREA[j][k] = 1;
                }
            }
        }

        if (A[i] == 4) {
            for (int j = 0; j < W; ++j) {
                for (int k = Y[i]; k < H; ++k) {
                    AREA[j][k] = 1;
                }
            }
        }
    }

    int count = 0;
    for (int i = 0; i < W; ++i) {
        for (int j = 0; j < H; ++j) {
            if (AREA[i][j] == 0) ++count;
        }
    }

    cout << count << endl;
    return 0;
}