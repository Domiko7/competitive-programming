#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;

    vector<int> boxes(n);
    for (auto &i : boxes) cin >> i;

    ll curr = 0;
    int ans = 1;

    for (auto i : boxes) {
        if (i > k) {
            ans = -1;
            break;
        }
        if (curr + (ll)i > k) {
            curr = (ll)i;
            ans++;
        } else {
            curr += (ll)i;
        }
    }

    if (ans == -1) {
        cout << "Stary, nie trac wiary, choc za duze te ciezary,\nSprobuj jeszcze, poczuj dreszcze,\nChoc wynik ten sam, bo wagi nie zmienia sie gram,\nTo probuj do upadlego, dla sportu samego." << "\n";
    } else {
        cout << ans << "\n";
    }
    
}