#include <bits/stdc++.h>
using namespace std;

#define REP(w, n) for(int w=0;w<int(n);++w)

int main() {
    int n; cin >> n;
    map<int, int> ma;
    REP(i, n) {
        int t; cin >> t;
        ma.insert(make_pair(t, i + 1));
    }

    for (auto itr = ma.begin(); itr !=  ma.end(); ++itr) {
        cout << itr->second << ' ';
    }
    cout << endl;
}