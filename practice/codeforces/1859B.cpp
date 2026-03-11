#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n);
    int cnt = 0;
    long long m = 2e9;
    long long k = 0;
    long long s = 2e9;
    while (n--) {
        int n2;
        cin >> n2;
        priority_queue<int, vector<int>, greater<int>> min_vals;
        for (int i = 0; i < n2; i++) {
            int a;
            cin >> a;
            arr[cnt].push_back(a);;
            min_vals.push(a);
        }
        m = min(m, (long long)min_vals.top());
        if (min_vals.size() == 1) {
            min_vals.push(min_vals.top());
        }
        min_vals.pop();
        k += min_vals.top();
        s = min(s, (long long)min_vals.top());
        cnt++;
    }

    long long ans = m + k - s;
    
    cout << ans << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
    
}