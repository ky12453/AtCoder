#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N, M;
    cin >> N >> M;

    map<ll, int> mp;
    for (int i = 0; i < N; ++i) {
        ll a;
        int b;
        cin >> a >> b;

        if (mp.count(a) == 0) {
            mp[a] = b;
        }
        else {
            mp[a] += b;
        }
    }

    int cnt = 0;
    ll ans = 0;
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        if (cnt + itr->second > M) {
            ans = ans + (M - cnt) * itr->first;
            break;
        }
        else {
            cnt += itr->second;
            ans = ans + itr->first * itr->second;
        }
    }
    cout << ans << endl;
    return 0;
}