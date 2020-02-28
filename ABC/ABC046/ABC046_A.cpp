#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int color[110] = {0};
    color[a] += 1;
    color[b] += 1;
    color[c] += 1;

    int ans = 0;
    for (int i = 1; i <= 100; ++i) {
        if (color[i] != 0) ++ans;
    }

    cout << ans << endl;
    return 0;
}