#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    int w, v;
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= n; i++) {
        cin >> w >> v;
        for (int j = 0; j <= m; j++) {
            if (w <= j) {
                dp[i][j] = max(v + dp[i - 1][j - w], dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][m] << "\n";

}