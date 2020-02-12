#include <iostream>
using namespace std;

int N, M;
int T[110], P[110], X[110];

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> T[i];

    cin >> M;
    for (int i = 0; i < M; ++i) cin >> P[i] >> X[i];

    for (int i = 0; i < M; ++i) {

        int t = 0;
        for (int j = 0; j < N; ++j) {
            if (j == P[i] - 1) {
                t += X[i];
            } else {
                t += T[j];
            }
        }

        cout << t << endl;
    }

    return 0;
}