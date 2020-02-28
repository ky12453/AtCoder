#include <iostream>
#include <map>
using namespace std;

int main() {
	int n;
	cin >> n;

	map<int, int, greater<int>> a;
	for (int i = 0; i < n; ++i) {
		int height;
		cin >> height;
		a.insert(make_pair(height, i));
	}


	for (auto itr = a.begin(); itr != a.end(); ++itr) {
        cout << itr->second + 1 << endl;
    }

	return 0;
}