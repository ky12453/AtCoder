#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ll N, A, B;
    cin >> N >> A >> B;

    ll ans = 0;
    ll t = N / (A + B);
    ans += t * A;

    ll o = N % (A + B);
    if (o >= A) {
        ans += A;
    } else {
        ans += o;
    }

    cout << ans << endl;
    return 0;
}
