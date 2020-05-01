#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < n;++i)

int main() {
    int n; cin >> n;
    vector<int> h(n); rep(i, n) cin >> h[i];
    vector<int> t = h;
    sort(h.begin(), h.end());

    string res = "Yes";
    rep(i, n) {
        if (abs(h[i] - t[i]) > 1) res = "No";
    }

    cout << res << endl;
    return 0;
}