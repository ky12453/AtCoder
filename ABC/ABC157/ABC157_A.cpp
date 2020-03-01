#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int ans = N / 2;
    if (N % 2 != 0) ++ans;

    cout << ans << endl;
    return 0;
}
