#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int w, h;
        cin >> w >> h;
        vector<vector<int>> dp;
        dp.resize(h + 1, vector<int>(w + 1, 0));
        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                int a;
                cin >> a;
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]) + a;
            }
        }
        cout << dp[h][w] << "\n";
    }
    
}