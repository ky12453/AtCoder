#include <iostream>
using namespace std;

int main() {
    int n, c, k;
    cin >> n >> c >> k;

    int t[n];
    for(int i = 0; i < n; ++i) cin >> t[i];

    sort(t, t + n);

    int capacity = 0;
    int wait = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        wait = t[i];
        capacity++;

        while (i + 1 < n && capacity < c && wait + k >= t[i + 1]) {
            capacity++;
            i++;
        }
        capacity = 0;
        ans++;
    }

    cout << ans << endl;
}