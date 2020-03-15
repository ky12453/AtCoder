#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll H, W;
    cin >> H >> W;

    ll area = H * W;
    if (H == 1 || W ==1) {
        cout << 1 << endl;
        return 0;
    }
    if (area % 2 == 0) {
        cout << area / 2 << endl;
    }
    else {
        cout << area / 2 + 1 << endl;
    }
    return 0;
}