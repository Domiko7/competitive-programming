#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int last = 0;

    for (int i = 0; i < n; i++) {
        int w;
        cin >> w;
        cout << w - last << " ";
        last = w;
    }

    cout << "\n";
    
}