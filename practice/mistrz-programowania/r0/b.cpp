#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> res;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i * 2 - 1; j++) {
            res.push_back(i * 2);
        }
    }

    for (int i = 0; i < res.size(); i++) {
        cout << res[i];
    }
    
}