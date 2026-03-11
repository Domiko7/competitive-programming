#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<int> donuts(n);

    for (auto &i : donuts) cin >> i;
    
    ll ans = 0;

    if (n == k) {
        for (auto i : donuts) {
            ans += i * i;
        }
    } else if (n == 2 && k == 3) {
        ll maximum = max(donuts[0], donuts[1]);
        ll minimum = min(donuts[0], donuts[1]);

        ans += minimum * minimum;
        ll opt1 = maximum / 2;
        ll opt2 = maximum - opt1;
        ans += (opt1 * opt1) + (opt2 * opt2);
    } else if (n == 1 && k == 2) {
        ll opt1 = donuts[0] / 2;
        ll opt2 = donuts[0] - opt1;
        ans += (opt1 * opt1) + (opt2 * opt2);
    } else {
        ll opts = (donuts[0] + 1) / k;
        ll opt1 = (opts * opts) * (donuts[0] / opts);
        ll opt2 = donuts[0] - ((donuts[0] / opts) * opts);
        ans += opt1 + (opt2 * opt2);
    }

    cout << ans << "\n";

}