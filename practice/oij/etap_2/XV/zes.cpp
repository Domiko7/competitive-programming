#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> contestants(n);
    for (auto &i : contestants) cin >> i;

    sort(contestants.begin(), contestants.end());

    int l = 0;
    int ans = 0;

    while (l + 2 < n) {
        if (contestants[l + 2] - contestants[l] <= 1) {
            ans++;
            l += 3;
        } else {
            l++;
        }
    }

    cout << ans << "\n";

}