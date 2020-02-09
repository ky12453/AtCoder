#include <iostream>
using namespace std;

string S, T, U;
int A, B;

int main() {
    cin >> S >> T;
    cin >> A >> B;
    cin >> U;

    if (U == S) {
        A = A - 1;
    } else {
        B = B - 1;
    }

    cout << A << " " << B << endl;
    return 0;
}