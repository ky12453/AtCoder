#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (B >= A * C) {
        cout << C << endl;
    } else {
        int ans = B / A;
        cout << ans << endl;
    }

    return 0;
}