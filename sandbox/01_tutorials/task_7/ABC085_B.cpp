#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

// std::setによる解法
/*
int main() {
    int n;
    cin >> n;

    int d[110];
    for (int i = 0; i < n; ++i) cin >> d[i];

    set<int> s;
    for(int i = 0; i < n; ++i) s.insert(d[i]);

    cout << s.size() << endl;
}
*/

// std::uniqueによる解法
/*
int main() {
    int n;
    cin >> n;

    int d[110];
    for (int i = 0; i < n; ++i) cin >> d[i];

    vector<int> v;
    for (int i = 0; i < n; ++i) v.push_back(d[i]);
    v.erase(unique(v.begin(), v.end()), v.end());

    cout << v.size() << endl;
}
*/

// バケット法による解法
/*
int main() {
    int n;
    cin >> n;

    int d[110];
    for (int i = 0; i < n; ++i) cin >> d[i];

    // 数え上げ用の配列を定義
    int num[110] = {0};
    for (int i = 0; i < n; ++i) num[d[i]]++;

    // 1以上の配列個数を数え上げ
    int counter = 0;
    for (int i = 1; i <= 100; ++i) {
        if (num[i] >= 1) counter++;
    }

    cout << counter << endl;
}
*/

// バケット法(map)による解法
int main() {
    int n;
    cin >> n;

    int d[110];
    for (int i = 0; i < n; ++i) cin >> d[i];

    map<int, int> m;
    for (int i = 0; i < n; ++i) m[d[i]];

    cout << m.size() << endl;
}