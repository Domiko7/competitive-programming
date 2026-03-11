#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, k, ans, a;
    cin >> n >> k;
    int even_count = 0;

    ans = 1e9;

    for (int i = 0; i < n; i++) {
        cin >> a;
        ans = min(ans, (k - (a % k)) % k);
        if (a % 2 == 0) even_count++;
    }

    if (k == 4) ans = min(ans, max(2 - even_count, 0));

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) solve();
    
}