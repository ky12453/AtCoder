#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    string str;
    vector<string> s;
    for (int i = 0; i < n; ++i) {
        cin >> str;
        s.push_back(str);
    }

    sort(s.begin(), s.end());

    for (int i = 0; i < n; ++i) {
        cout << s[i] ;
    }

    cout << endl;
    return 0;
}