#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    int ans = 0;
    for (int i = 0; i < n; ++i) {

        // 同じ値の場合
        while (i + 1 < n && a[i] == a[i + 1]) ++i;

        // 単調増加の場合
        if (a[i] < a[i + 1]) {
            while (i + 1 < n && a[i] < a[i + 1]) ++i;
        }
        // 単調減少の場合
        else if (a[i] > a[i + 1]) {
            while (i + 1 < n && a[i] > a[i + 1]) ++i;
        }

        ++ans;
    }

    cout << ans << endl;
}
