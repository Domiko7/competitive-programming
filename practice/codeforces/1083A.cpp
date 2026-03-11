#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<int> nums;

    int max_val = 0;
    int max_idx = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        nums.push_back(a);
        if (max_val < a) {
            max_val = a;
            max_idx = i;
        }
    }

    swap(nums[0], nums[max_idx]);

    for (int num : nums) cout << num << " ";

    cout << "\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
    
}