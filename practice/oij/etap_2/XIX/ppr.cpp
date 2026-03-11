#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> czynniki;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll a;
    cin >> a;

    ll div = 2;
    ll oldA = a;

    while (a > 1 && div * div <= a) {
        while (a % div == 0) {
            czynniki.push_back(div);
            a /= div;
        }
        div++;
    }

    if (a > 1) czynniki.push_back(a);

    //for (auto i : czynniki) cout << i << " ";

    map<ll, ll> occ;
    for (auto i : czynniki) occ[i]++;
    ll ans = LLONG_MAX;

    for (ll i = 2; i <= 40; i++) {
        ll cost = 0;
        for (auto prime : occ) {
            ll r = prime.second % i;
            cost += min(r * prime.first, (i - r) * prime.first);
        }
        ans = min(ans, cost);
    }

    if (oldA == 1) ans = 4;

    cout << ans << "\n";
}