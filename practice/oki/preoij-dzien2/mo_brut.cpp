#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;

    ll count = 0;

    while (n > 0) {
        if (n - 5 >= 0) {
            count++;
            n -= 5;   
        } else {
            count++;
            n -= 2;
        }
    }

    cout << count - n << "\n";
    
}