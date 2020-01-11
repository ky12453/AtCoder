#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    double max = -1.0;
    int suger = 0;
    int water = 0;
    // 操作Aの実施回数のループ
    for (int i = 0; i * a * 100 < f; ++i) {

        // 操作Bの実施回数のループ
        for (int j = 0; (a * i + b * j) * 100 < f; ++j) {

            // 操作Cの実施回数のループ
            for (int k = 0; (a * i + b * j) * 100 + c * k <= f; ++k) {

                // 操作Dの実施回数のループ
                for (int l = 0; (a * i + b * j) * 100 + c * k + d * l <= f; ++l) {

                    // 砂糖が溶け残らないこと
                    if (c * k + d * l <= (a * i + b * j) * e) {
                        
                        // 砂糖水の濃度を算出
                        if (!(i == 0 && j == 0 && k == 0 && l == 0)){
                            double concentration = 100 * (c * k + d * l) / (100 * (a * i + b * j) + c * k + d * l);
                            if (concentration > max) {
                                max = concentration;
                                suger = c * k + d * l;
                                water = 100 * (a * i + b * j);
                            } 
                        }
                    }
                }
            }
        }
    }

    cout << water + suger << " " << suger << endl;
}