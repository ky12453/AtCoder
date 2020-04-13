#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    char S[N]; for (int i = 0; i < N; ++i) cin >> S[i];

    ll r = 0, g = 0, b = 0;
    for (int i = 0; i < N; ++i) {
        if (S[i] == 'R') r++;
        if (S[i] == 'G') g++;
        if (S[i] == 'B') b++;
    }

    ll ans = r * g * b;
    
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (S[i] == S[j]) continue;

            int k = j * 2 - i;
            if (k < N && S[i] != S[k] && S[j] != S[k]) ans--;
        }
    }

    cout << ans << endl;
    return 0;
}