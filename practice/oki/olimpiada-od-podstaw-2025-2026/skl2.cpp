#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll target;
    cin >> target;
    ll low = 0;
    ll high = 15e5;
    while (high - low > 1) {
        ll mid = low + (high - low) / 2;
        if ((mid * (mid + 1) * (2 * mid + 1)) / 6 <= target) {
            low = mid;
        } else {
            high = mid;
        }
    }
    ll remainder = (target - ((low * (low + 1) * (2 * low + 1)) / 6)) / (low + 1);
    cout << low * (low + 1) / 2 + remainder << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    while (n--) solve();
    
}