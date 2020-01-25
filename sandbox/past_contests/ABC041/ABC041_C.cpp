#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int d[10] = {0};
    for (int i = 0; i < k; ++i) {
        int t;
        cin >> t;
        d[t] += 1;
    }

    while (true) {
        int i = n;
        bool flg = true;
        while (i > 0) {
            if (d[i % 10] == 1) flg = false;
            i /= 10;
        }
        if (flg == true) {
            break;
        } else {
            n++;
        }
    }

    cout << n << endl;
    return 0;
}