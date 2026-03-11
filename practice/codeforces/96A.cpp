#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string ans = "NO";
    string s;
    int r = 1;
    cin >> s;

    for (int i = 1; i < s.size(); i++) {
    	if (s[i] == s[i - 1]) {
    		r++;
    	} else {
    		r = 1;
    	}
    	if (r >= 7) {
    		ans = "YES";
    		break;
   		}
    }

    cout << ans << endl;

    return 0;
}