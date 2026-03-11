#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(string s, char c, int cnt, int expected) {
    for (int i = 0; i < s.size() - expected; i++) {
        int temp = 0;
        for (int j = i; j < i + expected; j++) {
            if (s[j] == 'g') temp++;
        }
        if (temp == expected) {
            return true;
        }
    }
    return false;
}

void solve() {
    int n;
    char c;
    string s;
    cin >> n >> c >> s;

    int cnt = count(s.begin(), s.end(), 'g');
    s = s + s;
    
    if (c != 'g') {
        int low = 0;
        int high = 2e9;

        while (high - low > 1) {
            int mid = low + (high - low) / 2;
            if (check(s, c, cnt, mid)) {
                high = mid;
            } else {
                low = mid;
            }
        }

        cout << low << "\n";

    } else {
        cout << 0 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) solve();
    
    return 0;
}