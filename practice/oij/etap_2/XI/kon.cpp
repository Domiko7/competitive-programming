#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string s;
    cin >> n >> s;

    int to_remove = n - 1;

    for (int i = 0; i < n - 1; i++) {
        if (s[i + 1] < s[i]) {
            to_remove = i;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i != to_remove) cout << s[i];
    }

    cout << "\n";
    
}