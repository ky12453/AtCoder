#include <bits/stdc++.h>
using namespace std;

#define REP(w, n) for(int w=0;w<int(n);++w)

int main() {
    string s; cin >> s;
    if (s == "Sunny") {
        cout << "Cloudy" << endl;
    } else if (s == "Cloudy") {
        cout << "Rainy" << endl;
    } else {
        cout << "Sunny" << endl;
    }
}