#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll w, d;
    cin >> w >> d;

    ll ans = -1;

    for (ll i = 2; i <= sqrt(1e9) + 1; i++) {
        for (ll j = 1; j <= 1e9 + 1; j *= i) {
            if (w == j && d == j * i) {
                ans = j * i * i;
                break;
            }
        }
        if (ans != -1) break;
    }

    if (w == 1 && d == 1) ans = 1;
    if (w == 1 && d != 1) ans = d * d;

    cout << ans << "\n";

}