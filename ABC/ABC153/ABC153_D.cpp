#include <iostream>
#include <map>
using namespace std;
using ll = long long int;

map<ll, ll> db;

ll kougeki(ll h, ll c) {
    if (h <= 1) return c + 1;
    h = h / 2;
    c += 1;

    if (db.count(h) == 1) {
        c += db[h];
    } else {
        db.insert(make_pair(h, kougeki(h, c) - c));
        c += db[h];
    }

    if (db.count(h) == 1) {
        c += db[h];
    } else {
        db.insert(make_pair(h, kougeki(h, c) - c));
        c += db[h];
    }


    return c;
}

int main() {
    ll h;
    cin >> h;

    ll c = 0;
    c = kougeki(h, c);

    cout << c << endl;

    return 0;
}