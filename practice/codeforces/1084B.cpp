#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;

    bool sorted = true;
    
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i]) {
            sorted = false;
            break;  
        }
    }

    if (sorted) {
        cout << n << "\n";
    } else {
        cout << 1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
    
}