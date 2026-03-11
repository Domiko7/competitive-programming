#include <bits/stdc++.h>
using namespace std;

vector<int> tab(256);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    for (char c : s) tab[c]++;

    int triples = 0;
    int doubles = 0;
    int fours = 0;

    for (int i = 0; i < tab.size(); i++) {
        if (tab[i] == 2) doubles++;
        else if (tab[i] == 3) triples++;
        else if (tab[i] == 4) fours++;
    }

    int ans = 0;

    for (int i = 0; i <= triples; i++) {
        for (int j = 0; j <= fours; j++) {
            int pairs = doubles + (triples - i) + 2 * (fours - j);
            int triplets = j + i;
            ans = max(ans, min(pairs, triplets));
        }
    }

    cout << ans << "\n";
}