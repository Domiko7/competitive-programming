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

    ll low = 0;
    ll high = 1e18 + 1;

    while (high - low > 1) {
        ll mid = low + (high - low) / 2;
        if (is_possible(mid, k)) {
            low = mid;
        } else {
            high = mid;
        }
    }

    if (low < m) {
        cout << "NIE" << "\n";
    } else {
        cout << "TAK" << "\n";
        cout << low << "\n";
    }
    
}