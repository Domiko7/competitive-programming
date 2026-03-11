#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int num;
            cin >> num;
            bool isNumEven = (num % 2 == 0);
            bool isPosEven = ((i + j) % 2 == 0);

            if (isNumEven && !isPosEven) num++;
            if (!isNumEven && isPosEven) num++;

            cout << num << " ";
        }
        cout << "\n";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
    
}