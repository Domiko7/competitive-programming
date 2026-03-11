#include <bits/stdc++.h>
using namespace std;
using ll = long long;

unordered_set<ll> potegowe;

ll power(ll base, ll exp) {
    ll ans = 1;
    for (int i = 0; i < exp; i++) ans *= base;
    return ans;
}

void generate() {
    ll multi = 2;
    ll curr = 2;
    while (true) {
        while (power(curr, multi) < 1e6) {
            //if (power(curr, multi) < 1000) cout << power(curr, multi) << "\n";
            potegowe.insert(pow(curr, multi));
            multi++;
        }
        multi = 2;
        if (power(curr, multi) > 1e6) {
            break;
        }
        curr++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll a;
    cin >> a;

    generate();
    
    
}