#include <iostream>
using namespace std;

int main() {
    string dna;
    cin >> dna;
    
    int longest = 1;
    int current = 1;
    int n = dna.size();

    for (int i = 1; i < n; i++) {
        if (dna[i - 1] != dna[i]) current = 0;
        current++;
        longest = max(longest, current);
    }

    cout << longest << endl;
}
