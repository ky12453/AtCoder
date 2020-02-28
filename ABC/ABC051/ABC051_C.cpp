#include <iostream>
using namespace std;

int main() {
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    string ans;

    for (int i = 0; i < ty - sy; ++i) ans += 'U';
    for (int i = 0; i < tx - sx; ++i) ans += 'R';
    
    for (int i = 0; i < ty - sy; ++i) ans += 'D';
    for (int i = 0; i < tx - sx; ++i) ans += 'L';

    ans += 'L';
    for (int i = 0; i <= ty - sy; ++i) ans += 'U';
    for (int i = 0; i <= tx - sx; ++i) ans += 'R';
    ans += 'D';
    
    ans += 'R';
    for (int i = 0; i <= ty - sy; ++i) ans += 'D';
    for (int i = 0; i <= tx - sx; ++i) ans += 'L';
    ans += 'U';

    cout << ans << endl;
}