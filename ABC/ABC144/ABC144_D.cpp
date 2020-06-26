#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, x; cin >> a >> b >> x;

  double res = 0.0;
  if (2 * x <= a * a * b) {
    res = atan(a * b * b / (2 * x));
  } else {
    res = atan(((2 * a * a * b) - (2 * x)) / (a * a * a));
  }
  
  cout << fixed << setprecision(10);
  cout << res * 180 / M_PI << endl;
}
