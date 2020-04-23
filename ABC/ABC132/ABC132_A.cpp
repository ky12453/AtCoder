#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[4]; for (int i = 0; i < 4; ++i) cin >> s[i];

    map<char, int> mp;
    for (int i = 0; i < 4; ++i) {
        if (mp.count(s[i]) == 0) {
            mp[s[i]] = 1;
        } else {
            mp[s[i]]++;
        }
    }

    string res = "No";
    if (mp.size() == 2) {
        for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
            if (itr->second == 2) res = "Yes"; 
        }
    }

    cout << res << endl;
    return 0;
}