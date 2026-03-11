#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<bool> sieve(1000003, true);

void fill_sieve() {
    sieve[0] = false;
    sieve[1] = false;
    int i = 2;
    int n = sieve.size() - 1;
    while (i * i <= n) {
        if (sieve[i]) {
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
        i++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> nums(n);

    for (auto &i : nums) cin >> i;

    fill_sieve();

    //for (int i = 0; i < 20; i++) cout << sieve[i] << " " << i << "\n";

    int cnt = 0;
    int multi = count(nums.begin(), nums.end(), 2);

    for (int num : nums) {
        if (sieve[num + 2]) {
            cnt++;
        }
    }

    ll ans = (ll)multi * cnt;

    cout << ans << "\n";

}