#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    map<int, bool> d;
    for (int i = 0; i < k; ++i) {
        int t;
        cin >> t;
        d[t] = true;
    }

    while (true) {
        int now = n;
        bool find = true;
        
        // 数値の各桁に嫌いな数字があれば次を探査
        while (now > 0) {
            if (d[now % 10]) find = false;
            now /= 10;
        }

        // 探査を続けるか確認
        if (find) {
            break;
        } else {
            ++n;
        }
    }

    cout << n << endl;
    return 0;
}