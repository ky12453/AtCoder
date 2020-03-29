#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    string ans = "No";
    if (str[2] == str[3]) {
        if (str[4] == str[5]) {
            ans = "Yes";
        }
    }

    cout << ans << endl;
    return 0;
}