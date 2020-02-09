#include <iostream>
using namespace std;

string S;

int main() {
    cin >> S;

    // 先頭、末尾が同じ文字列であるか？
    bool same_value = false;
    if (S[0] == S[S.length() - 1]) same_value = true;

    // 文字列長さが偶数であるか？
    bool even_length = false;
    if (S.length() % 2 == 0) even_length = true;

    string winner = "First";
    if (even_length == true && same_value == false) winner = "Second";
    if (even_length == false && same_value == true) winner = "Second";

    cout << winner << endl;
    return 0;
}