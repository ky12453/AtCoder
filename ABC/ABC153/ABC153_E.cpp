#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int h, n;
    cin >> h >> n;

    vector<int> a[n];
    vector<int> b[n];
    for (int i = 0; i < n; ++i) cin >> a[i] >> b[i];

    // コスパの計算
    vector<double> cost[n];
    for (int i = 0; i < n; ++i) cost[n] = a[i] / b[i];

    int ans = 0;
    while (true) {

        // 一撃で敵を倒せるか？
        if (h <= a.max) {

        } 
        // 一撃で倒せない場合
        else {
            max_element(cost.begin(), cost.end()) - cost.begin();
        }

    }
}