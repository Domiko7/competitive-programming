#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<pair<int, int>> candidates;

    for (int i = 0; i < n; i++) {
        if (b[i] < p) {
            candidates.push_back({b[i], i});
        }
    }

    sort(candidates.begin(), candidates.end());

    long long ans = p;
    int announced = n - 1;

    for (int i = 0; i < candidates.size(); i++) {
        if (candidates.size() == 0 || announced == 0) break;

        int people = min(a[candidates[i].second], announced);
        long long cost = (long long)candidates[i].first * people;
        ans += cost;
        announced -= people;
    }

    if (announced > 0) {
        ans += (long long)p * announced;
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