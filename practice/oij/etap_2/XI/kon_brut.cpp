#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string s;
    cin >> n >> s;

    priority_queue<string, vector<string>, greater<string>> cands;

    for (int i = 0; i < n; i++) {
        cands.push(s.substr(0, i - 1) + s.substr(i, n));
    }

    cout << cands.top() << "\n";
    
}