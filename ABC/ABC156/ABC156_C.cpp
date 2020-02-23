#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
const int INF = 1 << 29;

int main() {
    int N;
    cin >> N;

    vector<int> X(N);
    for (int i = 0; i < N; ++i) cin >> X[i];

    sort(X.begin(), X.end(), greater<int>());
    int M = X[0];

    int min_cost = INF;
    for (int i = 1; i <= M; ++i) {
        int cost = 0;
        for (int j = 0; j < N; ++j) {
            cost += (X[j] - i) * (X[j] - i);
        }

        min_cost = min(min_cost, cost);
    }

    cout << min_cost << endl;
    return 0;
}