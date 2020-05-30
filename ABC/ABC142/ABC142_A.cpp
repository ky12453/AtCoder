#include <bits/stdc++.h>
using namespace std;

#define REP(w, n) for(int w=0;w<int(n);++w)

int main() {
    int n; cin >> n;
    double odd = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) odd += 1;
    }

    cout << odd / n << endl;
}