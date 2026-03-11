#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    int a, b;

    vector<pair<int, int>> vals;

    for (int i = 0; i < n - 2; i++) {
        cin >> a >> b;
        vals.push_back({a, b});
    }

    sort(vals.begin(), vals.end());

    set<int> open;

    pair<int, int> ans;

    int smallest_open, biggest_open = 0;

    for (int i = 0; i < vals.size(); i++) {
        bool one_already = open.find(vals[i].first) != open.end();
        bool sec_already = open.find(vals[i].second) != open.end();

        if (open.size() > 0) {
            smallest_open = *open.begin();
            biggest_open = *open.rbegin();
        }

        if (one_already) {
            open.erase(vals[i].first);
        } else {
            open.insert(vals[i].first);
        }

        if (sec_already) {
            open.erase(vals[i].second);
        } else {
            open.insert(vals[i].second);
        }

        int smallest_close = min(vals[i].first, vals[i].second);
        int biggest_close = max(vals[i].first, vals[i].second);


        if (i > 0 && smallest_open > smallest_close || biggest_open < biggest_close) {
            ans = {vals[i].first, vals[i].second};
            break;
        }

    }

    cout << ans.first << " " << ans.second << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int z;
    cin >> z;
    while (z--) solve();
    
}