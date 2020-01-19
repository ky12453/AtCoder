#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p[n];
    for (int i = 0; i < n; ++i) cin >> p[i];

    int ans = 1;
    int th = p[0];
    for (int i = 1; i < n; ++i) {
        if (th >= p[i]) ++ans;
        th = min(th, p[i]);
    }

    cout << ans << endl;

    return 0;
}