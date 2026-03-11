#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        
        cin >> n >> s;
        int ans = count(s.begin(), s.end(), '1');

        s = '1' + s + '1';

        int l = 0;

        while (l <= n) {
            if (s[l] == '1') {
                int r = l + 1;
                while (s[r] != '1') {
                    r++;
                }
                int len = r - l - 1;
                int c = (l == 0) + (r == n + 1);
                ans += (len + c) / 3;
                l = r;
            } else {
                l++;
            }
        }

        cout << ans << "\n";    

    }
    
}