#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;

    ll ans = 1;
    for (int i = 2; (ll)i * i <= n; i++) {
        if (n % i == 0) {
            ans *= i;
            while (n % i == 0) {
                n /= i;
            }
        }
    }

    if (n > 1) {
        ans *= n;
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