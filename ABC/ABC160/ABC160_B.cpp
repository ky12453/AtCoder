#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll X;
    cin >> X;

    ll n500 = X / 500;
    ll t = X % 500;

    ll n5 = t / 5;

    cout << n500 * 1000 + n5 * 5 << endl;
    return 0;
}