#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    const int NMMAX = 60;
    int a[NMMAX], b[NMMAX];
    for (int i = 0; i < m; ++i) cin >> a[i] >> b[i];

    // 都市とその都市と繋がる道路の本数を管理
    map<int, int> mm;
    for (int i = 1; i <= n; ++i) mm[i] = 0;

    // 都市から出ていく道路、都市に入る道路の本数をバケット法で数え上げ
    for (int i = 0; i < m; ++i) {
        mm[a[i]]++;
        mm[b[i]]++;
    }

    // 都市に接続される道路の本数を出力
    for (int i = 1; i <= n; ++i) {
        cout << mm[i] << endl;
    }
}
