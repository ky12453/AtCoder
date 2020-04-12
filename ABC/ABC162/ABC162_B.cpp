#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    
    ll res = 0;
    for (int i = 1; i <= N; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
        } else {
            res += i;
        }
    }

    cout << res << endl;
    return 0;
}