#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    // 値の出現回数を記録するバケットを用意し、出現回数をカウント
    int bucket[100010] = {0};
    for (int i = 0; i < n; ++i) bucket[a[i]]++;

    // bucket[i-1], bucket[i], bucket[i+1]が最大となる値を探索
    int ans = 0;
    for (int i = 0; i < 100000; ++i) {
        
        int t = bucket[i];
        if (i - 1 >= 0) t += bucket[i - 1];
        if (i + 1 < n) t += bucket[i + 1];

        ans = max(t, ans);
    }

    cout << ans << endl;
}