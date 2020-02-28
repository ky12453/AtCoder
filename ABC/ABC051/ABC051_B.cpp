#include <iostream>
using namespace std;

int main() {
    int k, s;
    cin >> k >> s;

    int ans = 0;
    for (int x = 0; x <= k; ++x) {
        for (int y = 0; y <= k; ++y) {
            int t = s - x - y;
            if (t >= 0 && t <= k) ++ans;
        }
    }

    cout << ans << endl;
    return 0;
}