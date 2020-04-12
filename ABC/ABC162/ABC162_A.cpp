#include <bits/stdc++.h>
using namespace std;

int main() {
    char N[3]; for (int i = 0; i < 3; ++i) cin >> N[i];

    string res = "No";
    for (int i = 0; i < 3; ++i) {
        if (N[i] == '7') res = "Yes";
    }

    cout << res << endl;
    return 0;
}