#include <bits/stdc++.h>
using namespace std;

bool isIntDistance(vector<int> v1, vector<int> v2) {
    double d = 0;
    for (int i = 0; i < v1.size(); ++i) {
        d += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }

    d = sqrt(d);
    if ((int)d == d) return true;
    return false;
}

int main() {
    int n, d; cin >> n >> d;

    vector<vector<int>> points(n);
    for (int i = 0; i < n; ++i) {

        vector<int> point(d);
        for (int j = 0; j < d; ++j) {
            cin >> point[j];
        }
        points[i] = point;
    }

    int res = 0;
    for (int i = 0; i < n; ++i) {
        vector<int> v1 = points[i];
        for (int j = i + 1; j < n; ++j) {
            vector<int> v2 = points[j];
            if (isIntDistance(v1, v2)) res++;
        }
    }

    cout << res << endl;
    return 0;
}