#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll W, H, X, Y; cin >> W >> H >> X >> Y;
    
    bool flg = false;
    if (X * 2 == W && Y * 2 == H) flg = true;

    cout << W * H / 2.0 << " " << flg << endl;
    return 0;
}