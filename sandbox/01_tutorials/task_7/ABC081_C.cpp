#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a[200010];
    for (int i = 0; i < n; ++i) cin >> a[i];

    // 配列番号に応じた数字の出現個数を管理するバケットを用意
    int bucket[200010] = {0};

    // 数字の出現個数をカウント
    for (int i = 0; i < n; ++i) bucket[a[i]]++;

    // バケットを降順ソートし、数字の出現個数が1以上のものの要素数を合計する
    int sum = 0;
    sort(bucket, bucket+200001, greater<int>());
    for (int i = 0; i <= 200000; ++i) {
        if (i >= k && bucket[i] >= 1) sum += bucket[i] ;
    }

    cout << sum << endl;
}