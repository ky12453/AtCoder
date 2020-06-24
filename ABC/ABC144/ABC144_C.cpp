#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1LL << 60;

int main() {
  ll n; cin >> n;
  ll res = INF;

  for (ll i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      ll t1 = n / i;
      ll t2 = (i - 1) + (t1 - 1);
      if (res >= t2) res = t2;
    }
  }

  cout << res << endl;
}