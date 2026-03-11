#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, h;
    cin >> n;
    vector<int> dp;
    vector<int> arr;
    arr.push_back(0);
    dp.resize(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> h;
        arr.push_back(h);
    }

    for (int i = 2; i <= n; i++) {
        if (i == 2) {
            dp[i] = abs(arr[i - 1] - arr[i]) + dp[i - 1];
        } else {
            dp[i] = min(abs(arr[i - 1] - arr[i]) + dp[i - 1], abs(arr[i - 2] - arr[i]) + dp[i - 2]);
        }
        
    }

    cout << dp[n] << "\n";
}