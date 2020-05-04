#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;

    map<string, ll> ma;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        sort(s.begin(), s.end());
        if (ma.count(s) == 0) {
            ma[s] = 1;
        } else {
            ma[s] += 1;
        }
    }

    ll res = 0;
    for(auto it : ma) res += it.second * (it.second - 1) / 2;
    cout << res << endl;
}