#include <bits/stdc++.h>
using namespace std;

int main() {
    char S[4]; for (int i = 0; i < 4; ++i) cin >> S[i];

    string res = "Good";
    if (S[0] == S[1]) res = "Bad";
    if (S[1] == S[2]) res = "Bad";
    if (S[2] == S[3]) res = "Bad";

    cout << res << endl;
    return 0;
}