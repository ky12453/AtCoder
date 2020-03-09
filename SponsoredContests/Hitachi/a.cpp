#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    string S;
    cin >> S;

    string t1 = "hi";
    string t2 = "hihi";
    string t3 = "hihihi";
    string t4 = "hihihihi";
    string t5 = "hihihihihi";

    string ans = "No";
    if (S == t1) ans = "Yes";
    if (S == t2) ans = "Yes";
    if (S == t3) ans = "Yes";
    if (S == t4) ans = "Yes";
    if (S == t5) ans = "Yes";

    cout << ans << endl;
    return 0;
}