#include <bits/stdc++.h>
using namespace std;
using long long = ll;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int w;
    cin >> w;
    int div = w / 2;
    if (div * 2 == w && div > 1) cout << "YES";
    else cout << "NO";
    return 0;
}
