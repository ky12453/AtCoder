#include <iostream>
using namespace std;
using ll = long long;

ll A, B, X;

int main() {
    cin >> A >> B >> X;
    ll ans = 0;

    ans = B / X - A / X;
    if (A % X == 0) ++ans;

    cout << ans << endl;
    return 0;
}