#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    cout << min(A * N, B) << endl;
    return 0;
}