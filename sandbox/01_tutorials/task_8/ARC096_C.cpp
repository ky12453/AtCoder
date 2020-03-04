#include <iostream>
using namespace std;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int n = max(x, y);
    long long int min = 1000000000000;
    int total;
    for (int i = 0; i <= 2 * n; i = i + 2) {
        total = i * c + max(0, x - i / 2) * a + max(0, y - i / 2) * b;
        if (min > total) min = total;
    }

    cout << min << endl;
}