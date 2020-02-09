#include <iostream>
using namespace std;

string S;

int main() {
    cin >> S;

    for (int i = 0; i < S.length(); ++i) {
        S[i] = 'x';
    }

    cout << S << endl;
    return 0;
}