#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    string ans = "NO";
    for (int i = 1; i <= b; ++i) {
        if ((a * i) % b == c) ans = "YES";
    }

    cout << ans << endl;
}