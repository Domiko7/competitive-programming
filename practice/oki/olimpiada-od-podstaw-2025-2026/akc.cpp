#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int mini = 1000000001;
    int best = 0;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mini = min(mini, a);
        if (i > 0) {
            best = max(best, a - mini);
        }
    }

    cout << best << "\n";
    
}