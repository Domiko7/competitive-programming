#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    priority_queue<pair<char, int>> letters;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'd') {
            if (!letters.empty()) letters.pop();
        } else {
            letters.push({s[i], i});
        }
    }

    vector<char> ans(s.size());

    while (!letters.empty()) {
        pair<char, int> letter = letters.top();
        letters.pop();
        
        ans[letter.second] = letter.first;
    }

    for (char c : ans) {
        if (c) cout << c;
    }

    cout << "\n";
    
}