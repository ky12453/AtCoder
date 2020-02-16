#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int N;
int A[110];

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> A[i];

    string ans = "APPROVED";
    for (int i = 0; i < N; ++i) {
        if (A[i] % 2 == 0) {
            if (A[i] % 3 == 0 || A[i] % 5 == 0) {

            } else {
                ans = "DENIED";
            }
        }
    }

    cout << ans << endl;
    return 0;
}