#include <iostream>
#include <vector>
using namespace std;

vector<int> IntegerToVector(int bit, int n) {
    vector<int> s;
    for (int i = 0; i < n; ++i) {
        if (bit & (1<<i)) {
            s.push_back(i);
        }
    }

    return s;
}


int main() {
    int N, A;
    cin >> N >> A;

    vector<int> X(N);
    for (int i = 0; i < N; ++i) cin >> X[i];

    long long count = 0;
    for (int bit = 0; bit < (1 << N); ++bit) {
        vector<int> s;
        s = IntegerToVector(bit, N);

        int sum = 0;
        for (int i : s) {
            sum += X[i];
        }

        if (s.size() != 0) {
            if ((double)sum / s.size() == double(A)) {
                ++count;
            }
        }
    } 

    cout << count << endl;
    return 0;
}