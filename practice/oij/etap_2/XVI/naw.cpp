#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    int count = 1;
    string res = "()";

    while ((count * (count + 1) / 2) < n) {
        count++;
        res += "()";
    }
    if ((count * (count + 1) / 2) > n) {
        count--;
        res = res.substr(0, res.size() - 2);
    }

    int newCount = count * (count + 1) / 2;

    while (newCount < n) {
        res = "(" + res + ")";
        newCount++;
    }

    cout << res << "\n";


    
}