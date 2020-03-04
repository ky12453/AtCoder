#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int l[60];
    for (int i = 0; i < n; ++i) cin >> l[i];

    // 棒を長い順にソートし、上位K本を選ぶ
    int length = 0;
    sort(l, l + n, greater<int>());
    for (int i = 0; i < k; ++i) length += l[i];

    cout << length << endl;
}