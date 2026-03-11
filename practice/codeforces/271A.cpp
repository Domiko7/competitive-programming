#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int y;
    cin >> y;
    int ans;
    int t = y;
    set<char> d;

    while (true) {
        t++;
        d.clear();
        for (char i : to_string(t)) {
            d.insert(i);
        }
        if (d.size() == 4) {
            ans = t;
            break;
        }
    }

    cout << ans << endl;


    return 0;
}