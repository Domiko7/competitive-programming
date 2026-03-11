#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    int n = s.size();

    int l = 0;

    long long ans = 0;

    while (l < n) {
        //cerr << l << " " << r << " " << 1 << "\n";
        if (s[l] == 'a') {
            long long countA = 0;
            long long countB = 0;
            int r = l;

            while (r < n && s[r] == 'a') {
                countA++;
                r++;
            }

            while (r < n && s[r] == 'b') {
                countB++;
                r++; 
            }

            ans += countA * countB;
            l = r;
        } else {
            l++;
        }
    }

    cout << ans << "\n";
    
}