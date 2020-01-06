#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    vector<string> vec;
    string str;
    for (int i = 0; i < n; ++i) {
        cin >> str;
        vec.push_back(str);
    }

    sort(vec.begin(), vec.end());
    string res = "";
    for (auto itr = vec.begin(); itr != vec.end(); ++itr) {
        res += *itr;
    }

    cout << res << endl;
}