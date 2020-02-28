#include <iostream>
using namespace std;

string S;

int main() {
    cin >> S;

    int lmax = 0;
    for (int i = 0; i < S.length(); ++i) {

        int l = 0;
        for (int j = i; j < S.length(); ++j) {
            if (S[j] == 'A' || S[j] == 'C' || S[j] == 'G' || S[j] == 'T') {
                ++l;
            } else {
                break;
            }
        }
        lmax = max(lmax, l);
    }

    cout << lmax << endl;
    return 0;
}