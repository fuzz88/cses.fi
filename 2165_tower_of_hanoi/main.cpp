#include <iostream>
using namespace std;

void hanoi(int n, int a, int b, int c) {
    if (n == 1) {
        cout << a << " " << c << endl;
    } else {
        hanoi(n - 1, a, c, b);
        hanoi(1, a, b, c);
        hanoi(n - 1, b, a, c);
    }
}

int main() {
    int n;
    cin >> n;

    cout << ((1 << n) - 1) << endl;
    hanoi(n, 1, 2, 3);
}
