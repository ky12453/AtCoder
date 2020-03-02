#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int S[6];
    char C[6];
    for (int i = 0; i < M; ++i) {
        cin >> S[i] >> C[i];
    }

    int bucket[4];
    

    // int ans = -1;
    // for (int i = 0; i < 1000; ++i) {
    //     string str = to_string(i);

    //     if (str.length() >= N) {
    //         bool flg = true;
    //         for (int j = 0; j < M; ++j) {
    //             if (str[S[j] - 1] != C[j]) flg = false;
    //         }

    //         if (flg) {
    //             ans = i;
    //             break;
    //         }
    //     }
    // }

    // cout << ans << endl;
    return 0;
}
