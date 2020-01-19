#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string ans = "No";
    if (n <= m) ans = "Yes";

    cout << ans << endl;

    return 0;
}