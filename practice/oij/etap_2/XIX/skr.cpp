#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    vector<pair<string, int>> words;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        words.push_back({a, i});
    }

    sort(words.begin(), words.end());

    string res[n];

    for (int i = 0; i < n; i++) {
        bool can1 = (i + 1 == n);
        bool can2 = (i - 1 < 0);
        for (int j = 0; j < words[i].first.size(); j++) {
            
            if ((i + 1) < n && (j >= words[i + 1].first.size() || words[i].first[j] != words[i + 1].first[j])) can1 = true;
            if ((i - 1) >= 0 && (j >= words[i - 1].first.size() || words[i].first[j] != words[i - 1].first[j])) can2 = true;

            if (can1 && can2) {
                res[words[i].second] = words[i].first.substr(0, j + 1);
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << res[i] << "\n";
    }

}