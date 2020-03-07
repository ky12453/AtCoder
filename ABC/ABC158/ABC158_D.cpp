#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int Q;
    cin >> Q;

    int cnt = 0;
    for (int i = 0; i < Q; ++i) {
        int t, f;
        string c;
        cin >> t;

        if (t == 1) {
            cnt++;
            continue;
        }

        if (t == 2) {
            cin >> f >> c;

            if (cnt % 2 == 1) {
                if (f == 1) {
                    S.append(c);
                }
                else {
                    S.insert(0, c);
                }
            }
            else {
                if (f == 1) {
                    S.insert(0, c);
                }
                else {
                    S.append(c);
                }
            }
        }
    }

    if (cnt % 2 == 1) reverse(S.begin(), S.end());
    cout << S << endl;
    return 0;
}
