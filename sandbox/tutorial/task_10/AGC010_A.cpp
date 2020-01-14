#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    int odd_num = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) odd_num++;
    }

    string ans = "YES";
    if (odd_num % 2 == 0) ans = "NO";

    cout << ans << endl;
}