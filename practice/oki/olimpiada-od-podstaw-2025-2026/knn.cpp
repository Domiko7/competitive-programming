#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;

    int low = 0;
    int high = 2e9;
    int ans = 0;

    while (high >= low) {
        int mid = low + (high - low) / 2;
        if (mid / n + k <= mid) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << low << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
    
}