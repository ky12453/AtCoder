#include <iostream>
#include <map>
using namespace std;

int main() {
    string w;
    cin >> w;

    map<char, int> bucket;
    for (int i = 0; i < w.length(); ++i) {
        if (bucket.find(w[i]) == bucket.end()) {
            bucket.insert(make_pair(w[i], 1));
        } else {
            bucket[w[i]] = bucket[w[i]] + 1;
        }
    }

    string ans = "Yes";
    for (auto itr = bucket.begin(); itr != bucket.end(); ++itr) {
        int t = itr->second;
        if (t % 2 != 0) ans = "No";
    }

    cout << ans << endl;
    return 0;
}