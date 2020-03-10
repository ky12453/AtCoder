#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string S;
    cin >> S;

    int num0 = 0;
    int num1 = 0;
    for (int i = 0; i < S.length(); ++i) {
        if (S[i] == '0') {
            num0++;
        }
        else {
            num1++;
        }
    }

    cout << min(num0, num1) * 2 << endl;
    return 0;
}