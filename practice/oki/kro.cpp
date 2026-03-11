#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    cin >> n;

    long long res = n / 2;

    if (res * 2 != n) {
        res += 1;
    }

    cout << res << "\n";
    
}
