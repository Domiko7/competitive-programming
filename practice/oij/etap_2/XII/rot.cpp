#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    ll k;
    cin >> s >> k;

    if (k > s.size()) {
        ll skip = s.size() % k;
    } else {
        ll skip = k;
    }

    for (int i = 0; i < s.size(); i++) {
        char curr = s[(i + k) % s.size()];
        cout << curr;
    }

    cout << "\n";
    
}
