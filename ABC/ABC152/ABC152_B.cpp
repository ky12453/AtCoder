#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string ans = "";
    if (a == b) {
        for (int i = 0; i < a; ++i) {
            ans += to_string(a);
        }
    }

    if (a > b) {
        for (int i = 0; i < a; ++i) {
            ans += to_string(b);
        }
    } else if (a < b) {
        for (int i = 0; i < b; ++i) {
            ans += to_string(a);
        }
    }

    cout << ans << endl;

    return 0;
}