#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<int> people(n);
    for (auto &i : people) cin >> i;

    int ans = 0;
    int curr_max = 0;

    for (int i = 0; i < n; i++) {
        if (people[i] > curr_max) {
            ans = 1;
            curr_max = people[i];
        } else if (people[i] == curr_max) {
            ans++;
        }
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
    
}