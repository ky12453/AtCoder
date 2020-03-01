#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int A[3][3];
    int N;
    int B[12];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> A[i][j];
        }
    }

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    for (int i = 0; i < N; ++i) {

        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                if (A[j][k] == B[i]) A[j][k] = 0;
            }
        }
    }

    string ans = "No";
    if (A[0][0] == 0 && A[0][1] == 0 && A[0][2] == 0) ans = "Yes";
    if (A[1][0] == 0 && A[1][1] == 0 && A[1][2] == 0) ans = "Yes";
    if (A[2][0] == 0 && A[2][1] == 0 && A[2][2] == 0) ans = "Yes";

    if (A[0][0] == 0 && A[1][0] == 0 && A[2][0] == 0) ans = "Yes";
    if (A[0][1] == 0 && A[1][1] == 0 && A[2][1] == 0) ans = "Yes";
    if (A[0][2] == 0 && A[1][2] == 0 && A[2][2] == 0) ans = "Yes";

    if (A[0][0] == 0 && A[1][1] == 0 && A[2][2] == 0) ans = "Yes";
    if (A[0][2] == 0 && A[1][1] == 0 && A[2][0] == 0) ans = "Yes";

    cout << ans << endl;
    return 0;
}
