// 貪欲法による硬貨の問題

#include <bits/stdc++.h>
using namespace std;

int solve(int c, int amt, int& A) {
    int t = min(c, A / amt);
    A -= t * amt;
    return t;
}

int main() {
    int A, C1, C5, C10, C50, C100, C500;
    cin >> A >> C1 >> C5 >> C10 >> C50 >> C100 >> C500;

    int ans = 0;
    ans += solve(C500, 500, A);
    ans += solve(C100, 100, A);
    ans += solve(C50, 50, A);
    ans += solve(C10, 10, A);
    ans += solve(C5, 5, A);
    ans += solve(C1, 1, A);

    cout << ans << endl;
    return 0;
}