#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // 青色カードの枚数
    int n;
    cin >> n;

    // 青色カードに書かれている文字列
    string s[110];
    for (int i = 0; i < n; ++i) cin >> s[i];

    // 赤色カードの枚数
    int m;
    cin >> m;

    // 赤色カードに書かれている文字列
    string t[110];
    for (int i = 0; i < m; ++i) cin >> t[i];

    // 青色、赤色カードに記載されている文字列全てを管理するバケットを定義
    map<string, int> bucket;

    // 青色カードを調べる
    for (int i = 0; i < n; ++i) {
        if (bucket[s[i]] < 0) {
            bucket[s[i]] = 1;
        } else {
            bucket[s[i]]++;
        }
    }

    // 赤色カードを調べる
    for (int i = 0; i < m; ++i) {
        if (bucket[t[i]] < 0) {
            bucket[t[i]] = -1;
        } else {
            bucket[t[i]]--;
        }
    }

    // 特典が最も高いものを取得
    int max = -110;
    for (const auto& [key, value]: bucket) {
        if (max < value) max = value;
    }

    // 特典がマイナスになる場合は0にする
    if (max <= -1) max = 0;

    cout << max << endl;
}