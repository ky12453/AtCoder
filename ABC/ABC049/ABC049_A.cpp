#include <iostream>
using namespace std;

char C;

int main() {
    cin >> C;

    string ans = "consonant";
    if (C == 'a') ans = "vowel";
    if (C == 'i') ans = "vowel";
    if (C == 'u') ans = "vowel";
    if (C == 'e') ans = "vowel";
    if (C == 'o') ans = "vowel";

    cout << ans << endl;
    return 0;
}