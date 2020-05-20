#include <bits/stdc++.h>
using namespace std;

#define REP(w, n) for(int w=0;w<int(n);++w)

int main() {
    string s; cin >> s;
    string res = "Yes";
    for (int i = 0; i < s.size(); ++i) {
        if ((i + 1) % 2 == 0) {
            if (s[i] == 'R') res = "No";
        } else {
            if (s[i] == 'L') res = "No";
        }
    }

    cout << res << endl;
}