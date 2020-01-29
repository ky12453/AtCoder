#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans[11];
    int cnt = 0;
    for (int i = 0; i < s.length(); ++i) {
        // バックスペースの場合の挙動
        if (s[i] == 'B') {
            cnt = max(0, cnt - 1);
        }
        // 上記以外の場合の挙動
        else {
            ans[cnt] = s[i];
            ++cnt;
        }
    }

    for (int i = 0; i < cnt; ++i) {
        cout << ans[i];
    }
    cout << endl;
    return 0;
}