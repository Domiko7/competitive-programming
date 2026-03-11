#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    srand(time(NULL));
    
    string s;
    int length = (rand() % 1000) + 1;
    for (int i = 0; i < length; i++) s += 'a' + rand() % 26;
    int lengthRandom = (rand() % length) + 2;

    cout << s << "\n";

    for (int i = lengthRandom - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        cout << s[j];
    }

    cout << "\n";
}