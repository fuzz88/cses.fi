#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    unsigned long a, b;

    while (t--) {
        cin >> a >> b;
        if ((2 * a - b) % 3 == 0 && (2 * b - a) % 3 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
