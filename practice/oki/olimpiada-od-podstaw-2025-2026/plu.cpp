#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> t;
bool check(int k) {

    vector<bool> ok(t.size() + 1, false);
    vector<bool> single_ok(t.size(), false);
    int curr = 0;

    for (int i = 0; i < t.size(); i++) {
        if (curr >= k) ok[i] = true;
        if (t[i] >= k + 1) {
            curr++;
            single_ok[i] = true;
        }  
        if (i >= k && single_ok[i - k]) curr--;
    }
    if (curr >= k) ok[t.size()] = true;


    for (int i = k; i < t.size() - k; i++) {
        if (t[i] >= k * 2 + 1 && ok[i] && ok[k + i + 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    t.resize(n);
    for (int i = 0; i < n; i++) cin >> t[i];
    
    int low = 0;
    int high = n + 1;

    while (high - low > 1) {
        int mid = low + (high - low) / 2;
        if (check(mid)) {
            low = mid;
        } else {
            high = mid;
        }
    }

    cout << low << "\n";
}