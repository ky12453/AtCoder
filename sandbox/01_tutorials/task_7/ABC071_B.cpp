#include <iostream>
#include <string>
#include <map>
using namespace std;


int main() {
    string str;
    cin >> str;

    // 与えられた文字列と比較するための基準となる文字列を定義
    map<char, int> m;
    string alpabet = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; ++i) m[alpabet[i]] = 0;

    // 与えられた文字列と連想配列を比較して存在する文字列の個数をカウント
    string res = "None";
    for (int i = 0; i < str.length(); ++i) m[str[i]]++;

    // 与えられた文字列に存在しない文字列を特定
    for (int i = 0; i < 26; ++i) {
        if (m[alpabet[i]] == 0) {
            res = alpabet[i];
            break;
        }
    }

    cout << res << endl;
}