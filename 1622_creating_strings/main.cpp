// #include <bits/stdc++.h>
// using namespace std;

// void recurPermute(int index, string &s, set<string> &ans) {

//   if (index == s.size()) {
//     ans.insert(s);
//     return;
//   }

//   for (int i = index; i < s.size(); i++) {
//     swap(s[index], s[i]);
//     recurPermute(index + 1, s, ans);
//     swap(s[index], s[i]);
//   }
// }

// set<string> findPermutation(string &s) {
//   set<string> ans;

//   recurPermute(0, s, ans);

//   return ans;
// }

// int main() {
//   string s;
//   cin >> s;

//   set<string> res = findPermutation(s);
//   cout << res.size() << endl;
//   for (auto x : res) {
//     cout << x << endl;
//   }
//   return 0;
// }
//
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    vector<string> v;
    do {
        v.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << v.size() << "\n";
    for (auto s : v) {
        cout << s << "\n";
    }
}
