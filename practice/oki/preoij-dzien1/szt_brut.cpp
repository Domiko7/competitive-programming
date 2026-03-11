#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> planks;

bool is_possible(ll num, int needed) {
    int count = 0;
    for (auto i : planks) {
        if (i >= num) {
            count += i / num;
        }
        if (count >= needed) {
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, k;
    cin >> n >> m >> k;

    planks.resize(n);

    for (auto &i : planks) cin >> i;

    sort(planks.begin(), planks.end());
    reverse(planks.begin(), planks.end());

    int ans = -1;

    for (int i = m; i <= 1000; i++) {
        if (is_possible(i, k)) {
            ans = max(ans, i);
        }
    }

    if (ans == -1) {
        cout << "NIE" << "\n";
    } else {
        cout << "TAK" << "\n";
        cout << ans << "\n";
    }
    
}