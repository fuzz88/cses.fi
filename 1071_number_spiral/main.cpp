#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    long long x, y, m, d, sign;

    while (t--) {
        cin >> y >> x;

        m = max(x, y);

        sign = 1 - 2 * (m % 2);

        d = m * m - (m - 1);
        d += sign * (y - x);

        cout << d << endl;
    }
}
