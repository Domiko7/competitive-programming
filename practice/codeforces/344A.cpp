#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string now, last;
    int ans = 0;

    while (n--) {
        cin >> now;
        
        if (now[1] == last[0]) {
            ans++;
        }

        last = now;
    }

    ans++;

    cout << ans << endl;

    return 0;
}