#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    string S;
    cin >> S;

    string ans = "Yes";
    if (S == "AAA") ans = "No";
    if (S == "BBB") ans = "No";
    cout << ans << endl;
    return 0;
}
