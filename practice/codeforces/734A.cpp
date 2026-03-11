#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string s, ans;
    cin >> n >> s;
    int a = count(s.begin(), s.end(), 'A');
    int d = n - a;

    if (a > d) {
        ans = "Anton";
    } else if (a < d) {
        ans = "Danik";
    } else {
        ans = "Friendship";
    }

    cout << ans << endl;

    return 0;
}