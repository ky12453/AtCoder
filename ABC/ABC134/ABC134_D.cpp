#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n + 1]; for (int i = 1; i <= n; ++i) cin >> a[i];

    int res[n + 1];
    res[n] = a[n];
    for (int i = n; i > 0; --i) {

        int ball = 0;
        int cnt = 2;
        while (i * cnt <= n) {
            ball += a[i * cnt];
            cnt++;
        }

        if (ball % 2 != a[i]) {
            res[i] = 1;
        } else {
            res[i] = 0;
        }
    }

    int sum = 0;
    for (int i = 1; i <= n; ++i) sum += res[i];
    cout << sum << endl;

    // for (int i = 1; i <= n; ++i) {
    //     if (res[i] != 0) {
    //         cout << i << " ";
    //     }
    // }

    for (int i = 1; i <= n; i++) {
		if (res[i] != 0) printf("%d ", i);
	}
    
    return 0;

}