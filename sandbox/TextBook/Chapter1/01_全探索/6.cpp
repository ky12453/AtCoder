// 迷路の最短経路問題

#include <bits/stdc++.h>
using namespace std;

int N, M;
char maze[110][110];
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1 , 1, 0};
int cnt = 0;

int bfs(int x, int y, int c) {
    queue<int> qx;
    queue<int> qy;

    // ゴールにたどり着いたら探索終了
    if (maze[x][y] == 'G') {
        cnt = c;
        return true;
    }

    // 進める座標を4近傍から探索する
    for (int i = 0; i < 4; ++i) {
        int tx = x + dx[i];
        int ty = y + dy[i];
        if (maze[tx][ty] == '.' || maze[tx][ty] == 'G') {
            qx.push(tx);
            qy.push(ty);
        }
    }

    // 探索済みの座標を記録する
    maze[x][y] = '#';

    while (qx.size() != 0) {
        if (bfs(qx.front(), qy.front(), c + 1)) return true;
        qx.pop();
        qy.pop();
    }
    return false;
}

int main() {
    cin >> N >> M;

    for (int x = 0; x < 110; ++x) {
        for (int y = 0; y < 110; ++y) {
            maze[x][y] = '#';
        }
    }

    for (int x = 1; x <= N; ++x) {
        for (int y = 1; y <= M; ++y) {
            cin >> maze[x][y];
        }
    }

    // 開始位置を探索
    int sx, sy;
    for (int x = 1; x <= N; ++x) {
        for (int y = 1; y <= M; ++y) {
            if (maze[x][y] == 'S') {
                sx = x;
                sy = y;
            }
        }
    }

    bfs(sx, sy, 0);
    cout << cnt << endl;
    return 0;
}