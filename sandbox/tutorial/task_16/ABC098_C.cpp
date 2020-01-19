#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int east_num = 0;
    int west_num = 0;
    int ans = 300000;

    // Eの数を数える
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'E') ++east_num;
    }

    // 先頭行からシミュレーション
    for (int i = 0; i < n; ++i) {

        // リーダの左側のW数、右側のEの数が向きを変更する人の数
        if (s[i] == 'E') --east_num;
        ans = min(ans, east_num + west_num);

        // 次のシミュレーションのための情報
        if (s[i] == 'W') ++west_num;
    }

    cout << ans << endl;

    return 0;
}