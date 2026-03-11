#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int getNum(int num) {
    if (num + 1 % 2 != 0 && num + 1 % 3 != 0) {
        return num + 1;
    }
    return num - 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> nums(n);

    for (auto &i : nums) cin >> i;

    vector<int> sixes;
    vector<int> twos;
    vector<int> threes;

    for (int i = 0; i < n; i++) {
        if (nums[i] % 6 == 0) {
            sixes.push_back(i);
        } else {
            if (nums[i] % 3 == 0) {
                threes.push_back(i);
            } else if (nums[i] % 2 == 0) {
                twos.push_back(i);
            }
        }
    }

    int ans = 0;

    for (auto i : sixes) {
        ans++;
        nums[i] = getNum(nums[i]);
    }

    if (twos.size() < threes.size()) {
        for (auto i : twos) {
            ans++;
            nums[i] = getNum(nums[i]);
        }
    } else {
        for (auto i : threes) {
            ans++;
            nums[i] = getNum(nums[i]);
        }
    }

    cout << ans << "\n";
    for (auto i : nums) cout << i << " ";
    cout << "\n";

    return 0;
}