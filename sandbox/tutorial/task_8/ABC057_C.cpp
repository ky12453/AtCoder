#include <iostream>
#include <cmath>
using namespace std;

int f(long long int a, long long int b) {
    int digit_a = 0;
    int digit_b = 0;

    while (a > 0) {
        digit_a++;
        a = a / 10;
    }

    while (b > 0) {
        digit_b++;
        b = b / 10;
    }

    return max(digit_a, digit_b);
}

int main() {
    long long int n;
    cin >> n;

    int min = 11;
    for (int i = 1; i <= (int)sqrt(n); ++i) {
        long long int j;
        int t;
        if (n % i == 0) j = n / i;
        t = f(i, j);
        if (t < min) min = t;
    }

    cout << min << endl;
}