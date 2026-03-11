#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    string s;
    cin >> n >> k >> s;
    
    int all_blocks = 1;
    int blocks = 0;
    int ans = 2e9;


    for (int i = 1; i < n; i++) {
        if (s[i - 1] != s[i]) {
            all_blocks++;
        }
    }

    if (k == 0) {
        ans = all_blocks;
    } else {
        for (int i = 1; i < k; i++) {
            if (s[i - 1] != s[i]) {
                blocks++;
            }
        }

        for (int l = 0; l <= n - k; l++) {
            
            int r = l + k - 1;

            if (r == n || s[r] != s[r + 1]) {
                blocks++;
            }

            int curr = all_blocks - blocks;

            if (l > 0 && r < n - 1 && s[l - 1] == s[r + 1]) {
                curr--;
            }

            ans = min(ans, curr);

            if (l == 0 || s[l] != s[l - 1]) {
                blocks--;
            }
        }
    }
    

    cout << ans << "\n";

}