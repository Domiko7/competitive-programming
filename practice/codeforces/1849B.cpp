#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, a;
    cin >> n >> k;
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a % k == 0) {
            pq.push({k, -(i + 1)});
        } else {
            pq.push({a % k, -(i + 1)});
        }
        
    }
    for (int i = 0; i < n; i++) {
        cout << -pq.top().second << " ";
        pq.pop();
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
    
}