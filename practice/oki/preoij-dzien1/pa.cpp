#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll divide(ll num, ll divisor) {
    ll divided = num / divisor;
    ll remainder = num % divisor;
    ll ans = 0;
    for (int i = 0; i < divisor - remainder; i++) ans += divided * divided;
    for (int i = 0; i < remainder; i++) ans += (divided + 1) * (divided + 1);
    return ans;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    ll donut;
    cin >> n >> k;
    vector<ll> donuts;
    priority_queue<ll, vector<ll>, greater<ll>> donuts_queue;

    ll sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> donut;
        donuts.push_back(donut);
        sum += donut * donut;
    }

    for (int i = 0; i < n; i++) {
        for (ll d = 1; d < donuts[i]; d++) {
            ll gain = divide(donuts[i], d) - divide(donuts[i], d + 1);

            if (k - n <= 0) break;

            if (donuts_queue.size() == k - n) {
                if (gain <= donuts_queue.top()) break;
                donuts_queue.pop();
            }

            donuts_queue.push(gain);
        }
    }

    ll ans;
    ll multi = 0;

    while (!donuts_queue.empty()) {
        ll el = donuts_queue.top();
        donuts_queue.pop();
        multi += el;
    }

    ans = abs(sum - multi);

    cout << ans << "\n";

}