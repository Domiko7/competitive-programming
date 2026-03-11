#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<pair<ll, int>> ki(n);
    vector<ll> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> ki[i].first;
        ki[i].second = i;
    }

    sort(ki.begin(), ki.end());

    ll sq = 1;
    ll sum = 0;

    for (auto cel : ki) {
        while (sum + (sq * sq) <= cel.first) {
            sum += sq * sq;
            sq++;
        }
        ll remainder = (cel.first - sum) / sq;
        ans[cel.second] = (sq * (sq - 1) / 2) + remainder;
    }

    for (auto res : ans) cout << res << "\n";
    
}