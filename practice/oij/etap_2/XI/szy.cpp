#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
string s;

vector<int> getString(int start) {
    vector<int> res;
    res.push_back(start);
    for (char c : s) {
        if (c == '<') start--;
        if (c == '>') start++;
        if (start < 0 || start > 1e6) return {-1};
        res.push_back(start);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> s;

    int curr = 1;
    int maxCurr = -1;

    for (char c : s) {
        if (c == '<') {
            curr++;
        } else if (c == '>') {
            curr--;
        }
        maxCurr = max(maxCurr, curr);
    }

    for (auto i : getString(maxCurr)) cout << i << " ";
    cout << "\n";
    
}