#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        if (to_string(n)[to_string(n).length()-1] == '0') {
            n /= 10;
        } else {
            n--;
        }
    }

    cout << n << endl;
    
    return 0;
}