#include <iostream>
#include <stack>
using namespace std;

int N, M;
char land[110][110];

int main() {
    
    cin >> N >> M;

    // 配列を初期化
    for (int x = 0; x < 110; ++x) {
        for (int y = 0; y < 110; ++y) {
            land[x][y] = '.';
        }
    }

    // 庭の左上座標は(1, 1)スタートとする
    for (int x = 1; x <= N; ++x) {
        for (int y = 1; y <= M; ++y) {
            cin >> land[x][y];
        }
    }

    // 庭の左上からラスタ走査して水溜を探索する
    int lake = 0;
    for (int x = 1; x <= N; ++x) {
        for (int y = 1; y <= M; ++y) {

            stack<int> sx;
            stack<int> sy;
            if (land[x][y] == 'W') {

                ++lake;
                sx.push(x);
                sy.push(y);

                while (sx.size() != 0) {

                    int tx = sx.top();
                    int ty = sy.top();
                    sx.pop();
                    sy.pop();

                    // 水溜の8近傍を走査し、水溜を見つければスタックに格納する
                    // 探索済のものは'.'に置き換える
                    for (int i = -1; i <= 1; ++i) {
                        for (int j = -1; j <= 1; ++j) {
                            if (i != 0 || j != 0 ) {

                                if (land[tx + i][ty + j] == 'W') {
                                    sx.push(tx + i);
                                    sy.push(ty + j);
                                }
                            }
                        }
                    }

                    land[tx][ty] = '.';
                }
            }
        }
    }

    cout << lake << endl;
    return 0;
}