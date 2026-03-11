#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
OBSERWACJE:
- co najwyzej jedna literka
- bedziemy probowali wielokrotnosci liter??
*/

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int ans = n;

    for (int k = 0; k < ((n + 1) / 2); k++) {
        int differences = 0;
        bool everything_ok = true;
        for (int i = k + 1; i < n; i++) {
            if (s[i] != s[i % (k + 1)]) {
                differences++;
            }
            if (differences > 1) {
                everything_ok = false;
                break;
            }
        }
        if (everything_ok) {
            ans = k + 1;
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