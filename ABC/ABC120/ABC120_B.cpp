#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int A, B, K;
    cin >> A >> B >> K;

    int n = min(A, B);
    vector<int> ans;
    for (int i = 1; i <= n; ++i) {
        if (A % i == 0 && B % i == 0) {
            ans.push_back(i);
        }
    }

    sort(ans.begin(), ans.end(), greater<int>());
    cout << ans[K - 1] << endl;
    return 0;
}