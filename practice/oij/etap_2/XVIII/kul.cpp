#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string s;
    cin >> n >> s;

    reverse(s.begin(), s.end());

    int offset = 0;
    int distance = 0;
    char last = '.';
    ll ans = 0;

    for (char c : s) {
        if (c == '.' && offset > 0) {
            offset--;
        } else if (c == 'X') {
            ans = max(0, distance + offset + 1);
            offset++;
        }
        last = c;
        distance++;
    }

    cout << ans << "\n";
    
}