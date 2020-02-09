#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int main() {
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    int befor = A.size();

    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    int after = A.size();

    string ans = "NO";
    if (befor == after) ans = "YES";

    cout << ans << endl;
    return 0;
}