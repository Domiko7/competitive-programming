#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    long long ans = 0;

    for (int i = 0; i < s.size(); i++) {
        int count = 0;
        bool a_first = false;
        bool b_next = false;
        for (int j = i; j < s.size(); j++) {
            if (s[j] == 'a') {
                if (!a_first && !b_next) {
                    a_first = true;
                }
                if (b_next) break;
            } else {
                if (!a_first) break;
                if (!b_next) {
                    b_next = true;
                }
                count++;
            }
        }
        ans += count;
    }

    cout << ans << "\n";
    
}