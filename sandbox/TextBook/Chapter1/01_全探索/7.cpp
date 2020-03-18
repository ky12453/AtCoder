// 順列を算出

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4};
    do {
        for (auto itr = vec.begin(); itr != vec.end(); ++itr) {
            cout << *itr << " ";
        }
        cout << endl;
    } while (next_permutation(vec.begin(), vec.end()));

    return 0;
}