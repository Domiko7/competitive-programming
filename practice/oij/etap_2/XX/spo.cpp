#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll zero = 0;
int n;
vector<ll> a;
vector<ll> b;

ll solve(int start) {
    ll curr = 0;
    for (int i = 0; i < n; i++) {
        int actualIdx = (i + start) % n;
        ll timeOfSpeech = a[actualIdx];
        ll timeOfEnter = b[actualIdx];
        curr += max(zero, timeOfEnter - curr) + timeOfSpeech;
    }
    return curr;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    a.resize(n);
    b.resize(n);
    
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;

    bool same = true;
    for (int i = 0; i < n; i++) {
        if (b[i] != b[0]) {
            same = false;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << solve(i) << " ";
    } 

    cout << "\n";

    return 0;
}