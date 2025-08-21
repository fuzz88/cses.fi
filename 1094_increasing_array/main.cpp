#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    int n;
    cin >> n;

    uint64_t diff = 0;
    uint32_t previous;
    uint32_t current;

    cin >> previous;

    for (int i = 1; i < n; i++) {
        cin >> current;
        if (previous > current) {
            diff += previous - current;
        } else {
            previous = current;
        }
    }

    cout << diff << endl;
}
