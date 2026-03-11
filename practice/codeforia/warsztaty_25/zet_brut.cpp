#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    string s;
    cin >> n >> m >> s;
    
    while (m--) {
        int a, b;
        cin >> a >> b;
        for (int i = a - 1; i < b; i++) {
            if (s[i] == 'A') {
                s[i] = 'R';
            } else {
                s[i] = 'A';
            }
        }
    }

    cout << s << "\n";
}