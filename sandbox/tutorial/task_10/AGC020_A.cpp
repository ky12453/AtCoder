#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    string ans = "Alice";
    if ((a - b - 1) % 2 == 0) ans = "Borys";

    cout << ans << endl;
}