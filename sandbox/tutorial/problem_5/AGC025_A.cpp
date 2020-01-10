#include <iostream>
using namespace std;

int getSumDigit(int a) {
    int sum = 0;
    while (a > 0) {
        sum += a % 10;
        a = a / 10;
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    int min = 10000;
    int suma, sumb, sum;
    for (int i = 1; i < n; ++i) {
        suma = getSumDigit(i);
        sumb = getSumDigit(n - i);
        sum = suma + sumb;
        if (min > sum) min = sum;
    }

    cout << min << endl;

}