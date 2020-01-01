#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[210];
    for (int i = 0; i < n; i++) cin >> a[i];

    int count = 0;
    int exist_odd = false;
    while (true) {
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != 0) exist_odd = true; 
        }

        if (exist_odd) break;

        for (int i = 0; i < n; i++) {
            a[i] = a[i] / 2;
        }
        count++;
    }
    cout << count << endl;;
}