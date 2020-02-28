#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int start, end, cnt;
    bool find = false;
    for (int i = 0; i < 26; ++i) {

        start = -1;
        end = -1;
        cnt = 0;

        for (int j = 0; j < s.length(); ++j) {
            if (s[j] == alphabet[i]) {
                if (j < s.length() - 1 && s[j] == s[j + 1]) {
                    start = j + 1;
                    end = j + 2;
                    find = true;
                } else if (j < s.length() - 2 && s[j] == s[j + 2]) {
                    start = j + 1;
                    end = j + 3;
                    find = true;
                }
            }
        }

        if (find) break;
    }

    cout << start << ' ' << end << endl;
    return 0;
}