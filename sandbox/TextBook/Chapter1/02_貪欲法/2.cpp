// 貪欲法による区間スケジューリング問題

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    multimap<int, int> mp;
    for (int i = 0; i < N; ++i) {
        int s, t;
        cin >> s >> t;
        mp.insert(make_pair(t, s));
    }

    int ans = 0;
    int pe = 0;
    int ns, ne;
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        ns = itr->second;
        ne = itr->first;

        if (ns > pe) {
            ans++;
            pe = ne;
        }
    }

    cout << ans << endl;
    return 0;
}