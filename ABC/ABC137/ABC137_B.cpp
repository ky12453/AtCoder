#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, x; cin >> k >> x;
    int l = max(x - k + 1, -1000000);
    int r = min(x + k - 1, 1000000);
    for (int i = l; i <= r; ++i) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}