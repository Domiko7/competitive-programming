#include <bits/stdc++.h>
using namespace std;

int tab[256] = {0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, p;
    cin >> s >> p;

    for (char c : p) {
        tab[c]++;
    }

    int res = 0;

    for (int i = 0; i < s.size(); i++) {
        int tab2[256] = {0};
        for (int j = i; j < s.size(); j++) {
            tab2[s[j]]++;
            if (tab2[s[j]] <= tab[s[j]]) {
                if ((j - i + 1) >= ((p.size() + 1) / 2)) res++;
            } else {
                break;
            }
        }
    }

    cout << res << "\n";
}