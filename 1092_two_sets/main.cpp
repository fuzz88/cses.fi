#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    if (!(cin >> n)) return 0;

    long long s = n * (n + 1) / 2;
    if (s % 2) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    vector<int> a, b;
    s /= 2;

    for (int x = n; x >= 1; x--) {
        if (s >= x) {
            s -= x;
            a.push_back(x);
        } else {
            b.push_back(x);
        }
    }

    cout << a.size() << "\n";
    for (int x : a) cout << x << " ";
    cout << "\n" << b.size() << "\n";
    for (int x : b) cout << x << " ";
    cout << "\n";
    return 0;
}

