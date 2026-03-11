#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        arr[i] = word;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i].length() > 10) cout << arr[i][0] << arr[i].length()-2 << arr[i][arr[i].length()-1] << endl;
        else cout << arr[i] << endl;
    }
    return 0;
}