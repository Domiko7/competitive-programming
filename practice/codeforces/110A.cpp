#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string n;
    int count = 0;
    string ans;
    cin >> n;

    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '4' || n[i] == '7') {
            count++;
        }
    }   

    if (count == 4 || count == 7) {
        ans = "YES";
    } else {
        ans = "NO";
    }

    cout << ans << endl;

    return 0;
}