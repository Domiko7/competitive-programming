#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    srand(time(NULL));

    int n = (rand() % 100) + 1;

    cout << n << "\n";

    for (int i = 0; i < n; i++) {
        char letter = 'a' + (rand() % 26);
        cout << letter;
    }

    cout << "\n";
    
}