#include <iostream>
using namespace std;
using ll = long long;

int N, X;
int A[100010];

int main() {
    cin >> N >> X;
    for (int i = 0; i < N; ++i) cin >> A[i];

    ll operation = 0;
    for (int i = 0; i < N - 1; ++i) {

        if (A[i] + A[i + 1] > X) {

            int d = A[i] + A[i + 1] - X;
            if (d <= A[i + 1]) {
                A[i + 1] = A[i + 1] - d;
                operation += d;
            } else {
                A[i + 1] = 0;
                A[i] = A[i] - (d - A[i + 1]);
                operation += d;
            }
        }
    }


    cout << operation << endl;
    return 0;
}