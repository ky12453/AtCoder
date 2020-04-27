#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; ++i) cin >> a[i];

    vector<int> t; t = a;
    
    sort(a.begin(), a.end(), greater<int>());
    int first = a[0];
    int second = a[1];

    for (int i = 0; i < n; ++i) {
        if (t[i] == first) {
            cout << second << endl;
        } else {
            cout << first << endl;
        }
    }
    return 0;
}