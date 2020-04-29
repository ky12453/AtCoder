#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> p(n); for (int i = 0; i < n; ++i) cin >> p[i];

    vector<int> cp = p;
    sort(p.begin(), p.end());

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (p[i] != cp[i]) cnt++;
    }

    if (cnt == 2 || cnt == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}