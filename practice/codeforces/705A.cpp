#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string res;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            res += "I hate ";
        } else {
            res += "I love ";
        }
        if (i == n - 1) {
            res += "it ";
        } else {
            res += "that ";
        }
    }

    cout << res << endl;

}