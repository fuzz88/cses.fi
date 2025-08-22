#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    ll r = 0;
    // ll k;
    // ll c = 0;

    // for (ll i = 5; i <= n; i=i+5) {
    //     c++;
    //     r++;
    //     k = c;
    //     while (k % 5 == 0) {
    //         r++;
    //         k /= 5;
    //     }
    // }
    for (ll i = 5; i <= n; i*=5) {
        r += n / i;
    }
    cout << r << endl;
}
