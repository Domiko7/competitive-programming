#include <bits/stdc++.h>
using namespace std;

int n, a;
long long suma = 0;
vector<int> elektrownie;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        elektrownie.push_back(a);
        suma += a;
    }

    for (int i = 0; i < n; i++) {
        cout << suma - elektrownie[i] << " ";
    }

    cout << "\n";
    
}