#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int digit[5];
    int count = 0;
    int t;
    for (int i = a; i <= b; ++i) {
        t = i;
        for (int j = 0; j <= 4; ++j) {
            digit[j] = t % 10;
            t = t / 10;
        }
        if (digit[0] == digit[4] && digit[1] == digit[3]) count++;
    }
    
    cout << count << endl;
}