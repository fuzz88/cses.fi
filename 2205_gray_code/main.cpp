#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < (1 << n); i++) {
        int gray = i ^ (i >> 1);
        for (int shift = 0; shift < n; shift++) {
            cout << ((gray >> shift) & 1);
        }
        cout << endl;
    }
}
