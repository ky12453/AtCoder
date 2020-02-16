#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int A, B, C;

int main() {
    cin >> A >> B >>C;

    int bucket[10] = {0};
    bucket[A] += 1;
    bucket[B] += 1;
    bucket[C] += 1;

    string ans = "No";
    for (int i = 0; i < 10; ++i) {
        if (bucket[i] == 2) ans = "Yes";
    }

    cout << ans << endl;

    return 0;
}