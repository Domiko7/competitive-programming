#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    unordered_map<char, int> cyfry;

    for (int i = 0; i < s.size(); i++) cyfry[s[i]]++;

    long long l = 1;
    long long i = 1;

    long long ans = -1;

    while (l < 10000000000) {
        l = i * i;
        i++;
        string s2 = to_string(l);
        vector<int> nums;
        bool kazda = true;
        unordered_map<char, int> new_cyfry = cyfry;
        for (int i = 0; i < s2.size(); i++) {
            if (new_cyfry[s2[i]] > 0) {
                nums.push_back(s2[i] - '0');
                new_cyfry[s2[i]]--;
            } else {
                kazda = false;
            }
        }
        if (kazda) ans = max(ans, l);
        //cout << l << " " << i << "\n";
    }
    
    if (ans == -1) {
        cout << "NIE" << "\n";
    } else {
        cout << ans << "\n";
    }   
    
}