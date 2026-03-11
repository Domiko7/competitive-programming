#include <bits/stdc++.h>
using namespace std;


void solve() {
    string s;
    cin >> s;

    int occ0 = count(s.begin(), s.end(), '0');
    int occ1 = count(s.begin(), s.end(), '1');

    int ans = 0;

    for (int i = 0; i < s.size(); i++) {
        if (occ0 > 0 && s[i] == '1') {
            occ0--;
        } else if (occ1 > 0 && s[i] == '0') {
            occ1--;
        } else {
            ans = s.size() - i;
            break;
        }
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