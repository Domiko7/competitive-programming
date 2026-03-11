#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, w, v;
    cin >> n >> m;
    vector<int> dp(m + 1);

    for (int i = 0; i < n; i++) {
        cin >> w >> v;
        for (int j = m; j >= w; j--) {
            dp[j] = max(dp[j], v + dp[j - w]);
        }
    }

    cout << dp[m] << "\n";
}