#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s, t, ans;
    cin >> s >> t;

    reverse(s.begin(), s.end());

    if (s == t) {
        ans = "YES";
    } else {
        ans = "NO";
    }

    cout << ans << endl;

    return 0;
}