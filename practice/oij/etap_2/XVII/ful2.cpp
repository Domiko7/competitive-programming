#include <bits/stdc++.h>
using namespace std;

struct Cards {
    priority_queue<std::pair<int, int>> pair;
    priority_queue<std::pair<int, int>> other;
};

vector<int> tab(256);

Cards filter() {
    Cards cards;

    for (int i = 0; i < tab.size(); i++) {
        int count = tab[i];
        if (count >= 3) cards.other.push({count, i});
        else if (count >= 2) cards.pair.push({count, i});
    }

    return cards;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    int ans = 0;

    for (char c : s) tab[c]++;

    while (true) {
        Cards cards = filter();

        if (cards.pair.size() == 0 && cards.other.size() == 0) {
            break;
        } else {
            int length2 = -1;
            int length3 = -1;
            if (length3 == -1 && cards.other.size() > 0 && cards.other.top().first >= 3) {
                length3 = cards.other.top().second;
            }
            tab[length3] -= 3;
            Cards cards2 = filter();
            tab[length3] += 3;
            if (cards2.pair.size() > 0) {
                length2 = cards2.pair.top().second;
            }
            if (length2 == -1 && cards2.other.size() > 0 && cards2.other.top().first >= 2) {
                length2 = cards2.other.top().second;
            }
            if (length2 != -1 && length3 != -1) {
                tab[length2] -= 2;
                tab[length3] -= 3;
                //cout << (char)length2 << "\n";
                //cout << (char)length3 << "\n";
                ans++;
            } else {
                break;
            }
        }
    }

    cout << ans << "\n";
}