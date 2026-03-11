#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> tab(10);

int get_smallest(bool can_be_0) {
    if (can_be_0 && tab[0] > 0) {
        tab[0]--;
        return 0;
    } else {
        for (int i = 1; i < 10; i++) {
            if (tab[i] > 0) {
                tab[i]--;
                return i;
            }
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    int k;
    cin >> s >> k;

    for (char c : s) tab[c - '0']++;

    vector<vector<int>> ans(k);

    int nums_left = s.size();

    for (int i = 0; i < k; i++) {
        ans[i].push_back(get_smallest(false));
        nums_left--;
    }

    int curr = 0;

    while (nums_left > 0) {
        if (curr == k) curr = 0;
        ans[curr].push_back(get_smallest(true));
        curr++;
        nums_left--;
    }

    ll final_ans = 0;

    for (int i = 0; i < k; i++) {
        ll temp = 0;
        for (int c : ans[i]) temp = temp * 10 + c;
        final_ans += temp;
    }

    cout << final_ans << "\n";
    
}