#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int N, M;
char maze[110][110];

void solve(int x, int y, int c) {
    // stack<int> sx;
    // stack<int> sy;

    queue<int> sx;
    queue<int> sy;

    if (maze[x][y] == 'G') {
        cout << c << endl;
        return ;
    }

    if (maze[x - 1][y] == '.' || maze[x - 1][y] == 'G') {
        sx.push(x - 1);
        sy.push(y);
    }

    if (maze[x][y - 1] == '.' || maze[x][y - 1] == 'G') {
        sx.push(x);
        sy.push(y - 1);
    }

    if (maze[x][y + 1] == '.' || maze[x][y + 1] == 'G') {
        sx.push(x);
        sy.push(y + 1);
    }

    if (maze[x + 1][y] == '.' || maze[x + 1][y] == 'G') {
        sx.push(x + 1);
        sy.push(y);
    }

    maze[x][y] = '#';

    while (sx.size() != 0) {
        // solve(sx.top(), sy.top(), c + 1);
        solve(sx.front(), sy.front(), c + 1);
        sx.pop();
        sy.pop();
    }

    return ;
}

int main() {
    cin >> N >> M;
    
    // 移動禁止の場所は0とする
    for (int x = 0; x < 110; ++x) {
        for (int y = 0; y < 110; ++y) {
            maze[x][y] = '0';
        }
    }

    // 迷路を初期化
    for (int x = 1; x <= N; ++x) {
        for (int y = 1; y <= M; ++y) {
            cin >> maze[x][y];
        }
    }

    // スタート地点を探索
    int sx, sy;
    for (int x = 1; x <= N; ++x) {
        for (int y = 1; y <= M; ++y) {
            if (maze[x][y] == 'S') {
                sx = x;
                sy = y;
            }
        }
    }

    solve(sx, sy, 0);
}