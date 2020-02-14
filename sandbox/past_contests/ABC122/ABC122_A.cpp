#include <iostream>
using namespace std;

char B;

int main() {
    cin >> B;
    if (B == 'A') {
        cout << 'T' << endl;
    } else if (B == 'T') {
        cout << 'A' << endl;
    } else if (B =='C') {
        cout << 'G' << endl;
    } else {
        cout << 'C' << endl;
    }

    return 0;
}