#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    int curr = 0;
    cin >> n;
    int ans = 0;

    while (n--) {
        cin >> a >> b;
        curr -= a;
        curr += b;
        ans = max(curr, ans);
    }

    cout << ans << endl;

    return 0;
}