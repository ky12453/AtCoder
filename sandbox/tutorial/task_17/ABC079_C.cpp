#include <iostream>
using namespace std;

int ctoi(char s) {
    int i;
    switch (s) {
        case '0':
            i = 0;
            break;
        case '1':
            i = 1;
            break;
        case '2':
            i = 2;
            break;
        case '3':
            i = 3;
            break;
        case '4':
            i = 4;
            break;
        case '5':
            i = 5;
            break;
        case '6':
            i = 6;
            break;
        case '7':
            i = 7;
            break;
        case '8':
            i = 8;
            break;
        case '9':
            i = 9;
            break;
    }

    return i;
}

int cal(int a, int b, int op) {
    int ans;
    if (op == 0) {
        ans = a + b;
    } else {
        ans = a - b;
    }

    return ans;
}

char pri(int i) {
    char ans;
    if (i == 0) ans = '+';
    if (i == 1) ans = '-';

    return ans;
}

int main() {
    char s[4];
    for (int i = 0; i < 4; ++i) cin >> s[i];

    int si[4];
    for (int i = 0; i < 4; ++i) si[i] = ctoi(s[i]);

    
    int t;
    char ans[3];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                t = 0;
                t = cal(si[0], si[1], i);
                t = cal(t, si[2], j);
                t = cal(t, si[3], k);
                if (t == 7) {
                    ans[0] = pri(i);
                    ans[1] = pri(j);
                    ans[2] = pri(k);
                }
            }
        }
    }

    cout << s[0] << ans[0] << s[1] << ans[1] << s[2] << ans[2] << s[3] << "=7" << endl;

    return 0;
}