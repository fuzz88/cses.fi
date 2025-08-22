#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    ll r = 1;

    for (ll i = 0; i < n; i++) {
        r *= 2;
        r %= (ll)(1e9 + 7);
    }

    cout << r << endl;
}
