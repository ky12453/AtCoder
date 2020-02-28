#include <iostream>
using namespace std;

int A, B;
char OP;

int main() {
    cin >> A >> OP >> B;
    if (OP == '+') {
        cout << A + B << endl;
    } else {
        cout << A - B << endl;
    }

    return 0;
}