#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[110];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n, greater<int>());

    int a_point = 0;
    int b_point = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            a_point += a[i];
        } else {
            b_point += a[i];
        }
    }

    int diff = a_point - b_point;
    cout << diff << endl;
}