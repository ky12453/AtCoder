#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll cmb(ll n) {
    return (n * (n - 1)) / 2;
}

int main() {
    int n; cin >> n;
    vector<string> s(n); for (int i = 0; i < n; ++i) cin >> s[i];

    map<string, ll> mp;
    for (int i = 0; i < n; ++i) {
        string str = s[i];
        sort(str.begin(), str.end());
        
        if (mp.count(str) == 0) {
            mp[str] = 1;
        } else {
            mp[str] += 1;
        }
    }

    ll res = 0;
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        if (itr->second >= 2) {
            res += cmb(itr->second);
        }
    }

    cout << res << endl;
    return 0;
}