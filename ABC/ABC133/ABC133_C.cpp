#include <iostream>
#include <map>
using namespace std;

const int MOD = 2019;

int main() {
    int L, R;
    cin >> L >> R;

    map<int, int> bucket;
    for (int i = 0; i <= MOD; ++i) {
        if (L + i > R) break;

        int t = (L + i) % MOD;
        if (bucket.count(t) == 0) bucket[t] = 1;
    }

    auto itr = bucket.begin();
    int val1 = itr->first;
    itr++;
    int val2 = itr->first;

    cout << val1 * val2 % MOD << endl;
    return 0;
}