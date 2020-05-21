#include <bits/stdc++.h>
using namespace std;

#define REP(w, n) for(int w=0;w<int(n);++w)

int main() {
    int n, k, q; cin >> n >> k >> q;
    vector<int> a(q); REP(i, q) {
        int t; cin >> t;
        a[i] = t - 1;
    }

    vector<int> win(n, 0);
    REP(i, q) win[a[i]] += 1;

    REP(i, n) {
        if (k - (q - win[i]) > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}