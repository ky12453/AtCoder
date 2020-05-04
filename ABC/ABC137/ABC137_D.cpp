#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; ++i) {
        pair<int, int> pa;
        cin >> pa.first >> pa.second;
        vec.push_back(pa);
    }

    // 報酬がもられる日数が短い順にソート
    sort(vec.begin(), vec.end());

    int res = 0;
    int ptr = 0;
    priority_queue<int> pr;
    for (int i = m - 1; i >= 0; i--) {
        int cur = m - i;
        while (ptr < n && vec[ptr].first <= cur) {
            pair<int, int> pa = vec[ptr];
            pr.push(pa.second);
            ptr++;
        }

        if (!pr.empty()) {
            res += pr.top(); pr.pop();
        }
    }

    cout << res << endl;
}