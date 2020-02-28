#include <iostream>
#include <vector>
using namespace std;

int N, Q;
string S;
int L[100010], R[100010];

int main() {
    cin >> N >> Q;
    cin >> S;
    for (int i = 0; i < Q; ++i) cin >> L[i] >> R[i];

    vector<int> ss(N, 0);
    for (int i = 0; i < N; ++i) {
        if (S[i] == 'A') {
            if (S[i + 1] == 'C') ss[i] = 1;
        }
    }

    vector<int> wa(N + 1, 0);
    for (int i = 0; i <= N; ++i) {
        wa[i + 1] = wa[i] + ss[i];
    }

    for (int i = 0; i < Q; ++i) {
        int ans = wa[R[i]] - wa[L[i] - 1];
        if (ss[R[i] - 1] == 1) --ans;
        cout << ans << endl;
    }

    return 0;
}