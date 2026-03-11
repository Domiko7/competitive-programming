#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    s += s;

    int ans = 1;

    for (int i = 0; i < n; i++) {
        string curr = s.substr(i, n);
        int blocks = 1;
        for (int j = 1; j < curr.size(); j++) {
            if (curr[j] != curr[j - 1]) blocks++;
        }
        ans = max(blocks, ans);
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
    
}