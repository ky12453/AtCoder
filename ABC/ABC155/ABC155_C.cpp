#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int N;
vector<string> S;

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) {
        string tmp;
        cin >> tmp;
        S.push_back(tmp);
    }

    map<string, int> bucket;
    for (int i = 0; i < N; ++i) {
        if (bucket.count(S[i]) == 0) {
            bucket[S[i]] = 1;
        } else {
            bucket[S[i]] += 1;
        }
    }

    int m = 0;
    for (auto itr = bucket.begin(); itr != bucket.end(); ++itr) {
        m = max(m, itr->second);
        // cout << itr->first << endl;
    }

    for (auto itr = bucket.begin(); itr != bucket.end(); ++itr) {
        if (itr->second == m) {
            cout << itr->first << endl;
        }
    }
    return 0;
}