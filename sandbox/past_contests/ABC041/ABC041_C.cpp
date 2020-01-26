#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> a{};
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        a.insert(make_pair(t, i));
    }

    sort(a.begin(), a.end());

    for (auto itr = a.begin(); itr != a.end(); ++itr) {
        cout << *itr;
    }

    cout << endl;
    return 0;
}