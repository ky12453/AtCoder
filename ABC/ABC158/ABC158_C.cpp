#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int ans = -1;
    for (int i = 1; i < 10000; ++i) {
        int t8 = i * 0.08;
        int t10 = i * 0.1;
        if (t8 == A && t10 == B) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
