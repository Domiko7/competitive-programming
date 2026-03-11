#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int x = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;
        if (op.find('+') != string::npos) {
            x++;
        } else {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}


