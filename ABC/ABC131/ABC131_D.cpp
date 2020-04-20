#include <bits/stdc++.h>
using namespace std;
using ipair = pair<int, int>;

int main() {
    int N; cin >> N;

    multimap<int, int> mp;
    for (int i = 0; i < N; ++i) {
        int a, b; cin >> a >> b;
        mp.insert(make_pair(b, a));
    }

    int ct  = 0;
    string res = "Yes";
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        ct += itr->second;
        if (ct > itr->first) {
            res = "No";
            break;
        }
    }
    cout << res << endl;
    return 0;
}