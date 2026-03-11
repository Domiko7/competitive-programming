#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int &i : nums) cin >> i;

    vector<int> max_prefix(n + 1);
    vector<int> max_suffix(n + 1);

    for (int i = 0; i < n; i++) {
        max_prefix[i + 1] = max(max_prefix[i], nums[i]);
    }

    reverse(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) {
        max_suffix[i + 1] = max(max_suffix[i], nums[i]);
    }

    reverse(max_suffix.begin(), max_suffix.end());
    max_suffix.pop_back();

    for (int i = 0; i < n; i++) {
        cout << max_prefix[i + 1] << " " << max_suffix[i] << "\n";
    }
    
}