#include <iostream>
#include <queue>
using namespace std;

int main() {
    string A, B, C;
    cin >> A >> B >> C;

    queue<char> QA, QB, QC;
    for (int i = 0; i < A.length(); ++i) QA.push(A[i]);
    for (int i = 0; i < B.length(); ++i) QB.push(B[i]);
    for (int i = 0; i < C.length(); ++i) QC.push(C[i]);

    char winner;
    char next_player = 'a';
    while(true) {

        if (next_player == 'a') {
            if (QA.size() == 0) {
                winner = 'A';
                break;
            } else {
                next_player = QA.front();
                QA.pop();
                continue;
            }
        }

        if (next_player == 'b') {
            if (QB.size() == 0) {
                winner = 'B';
                break;
            } else {
                next_player = QB.front();
                QB.pop();
                continue;
            }
        }

        if (next_player == 'c') {
            if (QC.size() == 0) {
                winner = 'C';
                break;
            } else {
                next_player = QC.front();
                QC.pop();
                continue;
            }
        }

    }

    cout << winner << endl;
    return 0;
}