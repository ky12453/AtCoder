#include <iostream>
#include <vector>
#include <map>
using namespace std;

int N;
vector<int> P(110, 0);
map<int, int> POINT;

void check(int c, int pt) {
    if (c == N) {
        if (POINT.count(pt) == 0) POINT[pt] = 0;
        return;
    }

    // i問目を解答しないケース
    check(c + 1, pt);

    // i問目を解答するケース
    pt += P[c];
    check(c + 1, pt);

    return;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> P[i];

    check(0, 0);
    
    cout << POINT.size() << endl;
    return 0;
}