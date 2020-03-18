// 迷路の最短経路問題

#include <bits/stdc++.h>
using namespace std;

const int INF = 1<<29;
int H, W;
int SX, SY, GX, GY;
char maze[55][55];
int cost[55][55];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int bfs(int x, int y) {
    queue<int> qx;
    queue<int> qy;
    qx.push(x);
    qy.push(y);
    cost[x][y] = 0;

    while(!qx.empty()) {
        x = qx.front();
        y = qy.front();
        qx.pop();
        qy.pop();

        for (int i = 0; i < 4; ++i) {
            int tx = x + dx[i];
            int ty = y + dy[i];
            if (tx < 0 || ty < 0 || tx > H || ty > W) continue;
            if (maze[tx][ty] == '.' && cost[tx][ty] == INF) {
                qx.push(tx);
                qy.push(ty);
                cost[tx][ty] = cost[x][y] + 1;
            }
        }
    }

    return cost[GX][GY];
}

int main() {
    cin >> H >> W;
    cin >> SX >> SY;
    cin >> GX >> GY;
    SX--;
    SY--;
    GX--;
    GY--;

    for (int x = 0; x < H; ++x) {
        for (int y = 0; y < W; ++y) {
            cin >> maze[x][y];
            cost[x][y] = INF;
        }
    }

    cout << bfs(SX, SY) << endl;
    return 0;
}