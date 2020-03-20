// Best Cow Line(POJ No.3617)を解答

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    string T;
    while (S.length() != 0) {
        string R = S;
        reverse(R.begin(), R.end());

        if (R < S) {
            T.push_back(R[0]);
            S.pop_back();
        }
        else {
            T.push_back(S[0]);
            S.erase(0, 1);
        }
    }

    cout << T << endl;
    return 0;
}