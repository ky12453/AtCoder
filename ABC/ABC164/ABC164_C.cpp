#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> s(n); for (int i = 0; i < n; ++i) cin >> s[i];

    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << s.size() << endl;
    return 0;
}