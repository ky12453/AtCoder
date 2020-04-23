#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int p[n]; for (int i = 0; i < n; ++i) cin >> p[i];

    int res = 0;
    for (int i = 0; i < n - 2; ++i) {
        int p1 = p[i], p2 = p[i + 1], p3 = p[i + 2];

        if (p1 < p2 && p2 < p3) {
            res++;
            continue;
        }

        if (p3 < p2 && p2 < p1) {
            res++;
            continue;
        }

        if (p1 == p2 && p2 < p3) {
            res++;
            continue;
        }

        if (p3 == p2 && p2 < p1) {
            res++;
            continue;
        }
    }

    cout << res << endl;
    return 0;
}