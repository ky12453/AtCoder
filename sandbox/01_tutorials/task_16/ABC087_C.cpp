#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[2][n];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int ans = 0;
    int sum = 0;

    // 左からi番目で下に遷移するケース
    for (int i = 0; i < n; ++i) {
        sum = 0;
        for (int j = 0; j <= i; ++j) {
            sum += a[0][j];
            if (j == i) {
                for (int k = i; k < n; ++k) {
                    sum += a[1][k];
                }
                ans = max(ans, sum);
            }
        }
    }

    cout << ans << endl;
}