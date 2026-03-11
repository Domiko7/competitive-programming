#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h, a;
    cin >> n >> h;
    int ans = 0;

    while (n--) {
        cin >> a;

        if (a <= h) {
            ans++;
        } else {
            ans += 2;
        }
    }

    cout << ans << endl;

    return 0;
}
