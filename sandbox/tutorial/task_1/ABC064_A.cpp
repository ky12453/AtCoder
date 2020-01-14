#include <iostream>
#include <string>
using namespace std;

int main() {
    int r, g, b;
    cin >> r >> g >> b;

    string ans = "NO";
    if ((r * 100 + g * 10 + b) % 4 == 0) ans = "YES";

    cout << ans << endl;
}