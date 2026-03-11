#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    srand(time(NULL));

    int n = (rand() % 15) + 1;
    int m = (rand() % 10) + 1;
    int k = (rand() % 10) + 1;

    cout << n << " " << m << " " << k << "\n";

    for (int i = 0; i < n; i++) {
        cout << (rand() % 10) + 1 << " ";
    }

    cout << "\n";
    
}