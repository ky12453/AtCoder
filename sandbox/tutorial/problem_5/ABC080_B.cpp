#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int buf = n;
    int digit_sum = 0;
    while (buf > 0) {
        digit_sum += buf % 10;
        buf = buf / 10;
    }

    string str = "No";
    if (n % digit_sum == 0) str = "Yes";

    cout << str << endl;
}

