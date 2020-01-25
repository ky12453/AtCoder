#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	string ans = "NO";
	if (a == 7 && b == 5 && c == 5) ans = "YES";
	if (a == 5 && b == 7 && c == 5) ans = "YES";
	if (a == 5 && b == 5 && c == 7) ans = "YES";
	
	cout << ans << endl;
	return 0;
}
