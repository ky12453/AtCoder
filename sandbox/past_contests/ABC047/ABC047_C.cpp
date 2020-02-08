#include <iostream>
using namespace std;

string S;

int main() {
    cin >> S;

    char prev = S[0];
    int cnt = 0;
    for (int i = 1; i < S.length(); ++i) {
        if (prev != S[i]) {
            ++cnt;
            prev = S[i];
        }
    }

    cout << cnt << endl;
    return 0;
}