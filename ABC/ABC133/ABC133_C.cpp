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

    int ans = MOD;
    for (auto i = bucket.begin(); i != bucket.end(); ++i) {
        for (auto j = bucket.begin(); j != bucket.end(); ++j) {

            if (i != j) {
                ans = min(ans, i->first * j->first % MOD);
            }
        }
    }

    cout << ans << endl;
    return 0;
}