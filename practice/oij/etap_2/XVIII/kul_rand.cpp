#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    srand(time(NULL));
    
    int n = (rand() % 100) + 1;
    
    string s;

    for (int i = 0; i < n; i++) {
        bool person = rand() % 2;
        if (person) {
            s += 'X';
        } else {
            s += '.';
        }
    }

    cout << n << "\n";
    cout << s << "\n";
}