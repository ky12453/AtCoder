#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    int t = 0;
    for (int i = 0; i < n; ++i) t += a[i];
    t = round((double)t / n);

    int ans = 0;
    for (int i = 0; i < n; ++i) ans += (a[i] - t) * (a[i] - t);

    cout << ans << endl;
    return 0;
}