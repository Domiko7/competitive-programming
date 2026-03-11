#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> dp;
    vector<int> m;

    dp.resize(n + 1, 0);


    for (int i = 1; i <= n; i++) {
        int l;  
        cin >> l;
        m.push_back(l);
        if (i == 1) {
            dp[1] = l;
        } else {
            if (dp[i - 1] == dp[i - 2]) {
                dp[i] = dp[i - 1] + l;
            } else {
                dp[i] = 
            }
        }
    }

    cout << dp.back() << "\n";


}