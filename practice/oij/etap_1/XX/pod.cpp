#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<ll> a(n);

    for (auto &i : a) cin >> i;

    bool divisibleBy3 = false;
    bool divisibleBy2 = false;

    for (auto i : a) {
        if (i % 2 == 0) {
            divisibleBy2 = true;
        }
        if (i % 3 == 0) {
            divisibleBy3 = true;
        }
    }

    if (divisibleBy2 && divisibleBy3) {
        cout << "TAK" << "\n";
    } else {
        cout << "NIE" << "\n";
    }
    
}