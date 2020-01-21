#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    str.replace(5, 1, " ");
    str.replace(13, 1, " ");

    cout << str << endl;
}