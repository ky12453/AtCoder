#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  string res = "No";

  for (int i = 1; i <= 9; ++i) {
    int t = n / i;
    if (n % i == 0 && t <= 9) {
      res = "Yes";
    }
  }

  cout << res << endl;
}