#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, r;
    cin >> n >> r;
    vector<int> monety(n);

    for (int i = 0; i < n; i++) cin >> monety[i];
    
    vector<int> dp(r + 1, n + 1);
    dp[0] = 0;

    for (int m : monety) {
        for (int i = r; i >= m; i--) {
            dp[i] = min(dp[i - m] + 1, dp[i]);
        }
    }

    int ans = dp.back();

    if (ans == n + 1) {
        cout << "NIE" << "\n";
    } else {
        cout << dp.back() << "\n";
    }

}