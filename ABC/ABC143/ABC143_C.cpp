#include <bits/stdc++.h>
using namespace std;

 int main() {
   int n; cin >> n;
   string s; cin >> s;

  int res = 1;
  char prv = s[0];
  for (int i = 0; i < s.length(); ++i) {
    if (prv != s[i]) res += 1;
    prv = s[i]; 
  }

  cout << res << endl;
 }