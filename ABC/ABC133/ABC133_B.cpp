#include <iostream>
#include <cmath>
using namespace std;

bool is_integer( double x ){
  return floor(x)==x;
}

int main() {
    int N, D;
    cin >> N >> D;

    int X[12][12] = {0};
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < D; ++j) {
            cin >> X[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {

            double dist = 0;
            for (int k = 0; k < D; ++k) {
                dist += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]);
            }

            if (is_integer(sqrt(dist))) ++ans;
        }
    }

    cout << ans << endl;
    return 0;
}