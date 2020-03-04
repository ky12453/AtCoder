#include <iostream>
using namespace std;

const int INF = 1<<29;

int N;
int DP[100010];

int main() {
    cin >> N;

    int t[12] = {1, 6, 9, 36, 81, 216, 729, 1296, 6561, 7776, 46656, 59049};

    for (int i = 0; i < 100010; ++i) DP[i] = INF;
    DP[0] = 0;

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < 12; ++j) {
            if (i >= t[j]) {
                DP[i] = min(DP[i], DP[i - t[j]] + 1);
            }
        }
    }

    cout << DP[N] << endl;
    return 0;
}