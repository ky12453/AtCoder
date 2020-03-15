// Lake Counting(POJ No.2386)を解答

#include <bits/stdc++.h>
using namespace std;

int N, M;
char AREA[110][110];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0 , 1, -1, 1, -1, 0, 1};

bool dfs(int x, int y) {
    stack<int> sx, sy;

    // 8近傍の水溜りを探索
    for (int i = 0; i < 8; ++i) {
        int tx = x + dx[i];
        int ty = y + dy[i];
        if (AREA[tx][ty] == 'W') {
            sx.push(tx);
            sy.push(ty);
        }
    }

    // 現在の座標を探索済とする
    AREA[x][y] = '.';

    // 探索できる座標があれば、さらに探索する
    while (sx.size() != 0) {
        dfs(sx.top(), sy.top());
        sx.pop();
        sy.pop();
    }

    return true;
}

int main() {
    int N, M;
    cin >> N >> M;

    for (int x = 0; x < 110; ++x) {
        for (int y = 0; y < 110; ++y) {
            AREA[x][y] = '.';
        }
    }

    for (int x = 1; x <= N; ++x) {
        for (int y = 1; y <= M; ++y) {
            cin >> AREA[x][y];
        }
    }

    int ponds = 0;
    for (int x = 1; x <= N; ++x) {
        for (int y = 1; y <= M; ++y) {
            if (AREA[x][y] == 'W') {
                dfs(x, y);
                ponds++;
            }
        }
    }

    cout << ponds << endl;
    return 0;
}