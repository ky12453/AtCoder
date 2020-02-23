#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int cnt = 0;
    while (true) {
        if (N < K) {
            ++cnt;
            break;
        }

        N = N / K;
        ++cnt;
    }

    cout << cnt << endl;
    return 0;
}