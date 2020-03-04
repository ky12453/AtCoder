#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans;
    if ((a + b) % 2 == 0) {
        ans = (int)((a + b) / 2);
    } else {
        ans = (int)((a + b) / 2) + 1;
    }
    
    cout << ans << endl;
}