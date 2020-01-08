#include <iostream>
using namespace std;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int n = x;
    if (x < y) n = y;
    long long int min = 1000000000000;
    int a_num, b_num, total;
    for (int i = 0; i <= 2 * n; i = i + 2) {
        a_num = x - i / 2;
        b_num = y - i / 2;
        if (a_num < 0) a_num = 0;
        if (b_num < 0) b_num = 0;
        total = a_num * a + b_num * b + i * c;
        if (min > total) min = total;
    }

    cout << min << endl;
}