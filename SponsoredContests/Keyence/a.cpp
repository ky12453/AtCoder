#include <iostream>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    int black = 0;
    int ma = max(H, W);
    int mi = min(H, W);
    int ans = 0;

    for (int i = 1; i <= mi; ++i) {
        black += ma;
        if (black >= N) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}