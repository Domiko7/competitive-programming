#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m, d;
    cin >> n >> m >> d;
    
    int boxes = 1;
    int curr_weight = 0;

    for (int i = 0; i < n; i++) {
        if (curr_weight < d + 1) {
            curr_weight += m;
        } else {
            boxes++;
            curr_weight = m;
        }
    }

    cout << boxes << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
    
}