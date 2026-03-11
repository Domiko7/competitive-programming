#include <bits/stdc++.h>
using namespace std;

vector<int> tab(256, 0);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, p;
    cin >> s >> p;

    for (char c : p) tab[c]++;

    long long ans = 0;
    int goal = (p.size() + 1) / 2;

    int r = 0;

    for (int l = 0; l < s.size(); l++) {
        while (r < s.size() && tab[s[r]] > 0) {
            tab[s[r]]--;
            r++;
        }

        if (r - l + 1 >= goal) {
            ans += r - l + 1 - goal;
        }

        if (r > l) {
            tab[s[l]]++;
        } else {
            r = l + 1;
        }
    }

    cout << ans << "\n";
}