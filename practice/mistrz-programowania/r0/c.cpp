#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    char x;
    cin >> n;
    long long mx = n;
    long long mi = 1;

    while (true) {
        long long guess = mi + (mx - mi) / 2;
        cout << "? " << guess << "\n" << flush;
        cin >> x;
        if (x == '<') {
            mx = guess - 1;
        } else if (x == '>') {
            mi = guess + 1;
        } else {
            break;
        }
    }
    
}