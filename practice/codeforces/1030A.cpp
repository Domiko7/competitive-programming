#include <bits/stdc++.h>

using namespace std;


int main() {

    int n;
    string ans = "EASY";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        if (p == 1) {
            ans = "HARD";
            break;
        }
    }

    cout << ans << endl;


}
