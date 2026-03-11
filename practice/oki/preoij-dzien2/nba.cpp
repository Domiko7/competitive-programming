#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
string s;

int check() {
    int ans = n;
    for (int k = 0; k <= ((n + 1) / 2); k++) {
        int differences = 0;
        bool everything_ok = true;
        if (n % (k + 1) == 0) {
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
    }
    return ans;
}

void solve() {
    cin >> n >> s;

    int ans1 = check();
    reverse(s.begin(), s.end());
    int ans2 = check();

    cout << min(ans1, ans2) << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
    
}