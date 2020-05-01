#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;

    vector<int> ans(s.size(), 0);
    s.push_back('R');
    int r = 0, l = 0;
    char prv = s[0];
    for (int i = 0; i < s.size(); ++i) {
        if (prv == 'L' && s[i] == 'R') {

            // Rの右端の座標を探索する
            int j = i - 1;
            while (s[j] == 'L') j--;

            // abs(r - l)が偶数のケース
            if (abs(r - l) % 2 == 0) {
                ans[j] = (r + l) / 2, ans[j + 1] = (r + l) / 2;
            } else {
                int com = min(r, l);
                int t = (r + l) / 2;

                // 共通：偶数、r：奇数
                if (com % 2 == 0 && r > l) {
                    ans[j] = t + 1, ans[j + 1] = t;
                }

                // 共通：偶数、l：奇数
                if (com % 2 == 0 && r < l) {
                    ans[j] = t, ans[j + 1] = t + 1;
                }

                // 共通：奇数、r：奇数
                if (com % 2 != 0 && r > l) {
                    ans[j] = t, ans[j + 1] = t + 1;
                }

                // 共通：奇数、l：奇数
                if (com % 2 != 0 && r < l) {
                    ans[j] = t + 1, ans[j + 1] = t;
                }
            }

            l = 0, r = 1;
            prv = s[i];
        } else {
            if (s[i] == 'L') l++;
            if (s[i] == 'R') r++;
            prv = s[i];
        }
    }

    for (int i = 0; i < s.size() - 1; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}