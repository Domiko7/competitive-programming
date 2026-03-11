#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, a;
    if (!(cin >> n >> m >> a)) return 0;
    long long rows = (n + a - 1) / a;
    long long columns = (m + a - 1) / a;
    long long ans = rows * columns;
    cout << ans << endl;

    return 0;
}