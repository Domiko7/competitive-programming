#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string x;
    cin >> x;

    vector<int> vektorek;
    int curr = 0;
    for (char c : x) {
        if (curr > 0) vektorek.push_back(c - '0');
        curr += c - '0';
    }

    int first = x[0] - '0';
    bool first_used = false;

    sort(vektorek.begin(), vektorek.end());

    int ans = 0;

    while (curr > 9) {
        ans++;
        if (first - 1 > vektorek.back() && !first_used) {
            curr -= first - 1;
            first_used = true;
        } else {
            curr -= vektorek.back();
            vektorek.pop_back();
        }
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