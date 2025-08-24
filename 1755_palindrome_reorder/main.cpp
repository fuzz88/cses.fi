#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    int size = s.size();

    unordered_map<char, int> freqs;

    for (int i = 0; i < size; i++) {
       freqs[s[i]]++;     
    }

    int odd_count = 0;
    char odd_char;
    vector<char> palindrome;
    
    for (const auto& [key, value] : freqs) {
       if (value % 2 != 0) {
           odd_count++;
           odd_char = key;
       }
    }

    if (odd_count > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    for (const auto& [key, value] : freqs) {
        if (key != odd_char) {
            for (int i = 0; i < value / 2; i++) {
                cout << key;
                palindrome.push_back(key);
            }
        }
    }

    for (int i = 0; i < freqs[odd_char]; i++) {
        cout << odd_char;
    }

    while (!palindrome.empty()) {
        cout << palindrome[palindrome.size()-1];
        palindrome.pop_back();
    }

    cout << endl;
}
