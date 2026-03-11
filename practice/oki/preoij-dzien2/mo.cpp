#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;

    ll count = 0;

    count += n / 5;
    n -= (n / 5) * 5;

    while (n > 0) {
        count++;
        n -= 2;
    }

    cout << count - n << "\n";
    
}