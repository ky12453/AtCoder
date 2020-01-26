#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int h, n;
    cin >> h >> n;

    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    ll sum = 0;
    for (int i = 0; i < n; ++i) sum += a[i];

    string ans = "No";
    if (h <= sum) ans = "Yes";

    cout << ans << endl;
    return 0;
}