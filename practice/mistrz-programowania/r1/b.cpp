#include <bits/stdc++.h>
using namespace std;

int n;

long long z, t;

long long curr = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> z >> t;
        if (i == 0) curr = z;
        if (z > curr) {
            curr = z;
            count = 1;
        } else if (z == curr) {
            count++;
        }
    }

    if (count > 1) {
        cout << "MINIMUM" << "\n";
    } else {
        cout << "MAKSIMUM" << "\n";
    }
    
}