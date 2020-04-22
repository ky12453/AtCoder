#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 29;

int main() {
    int n, l; cin >> n >> l;

    int ans = INF;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += l + i - 1;
        if (abs(ans) > abs(l + i - 1)) ans = l + i - 1;
    }

    cout << sum - ans << endl;
    return 0;
}