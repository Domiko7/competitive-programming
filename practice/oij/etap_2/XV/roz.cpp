#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int last1 = INT_MIN;
int last2 = INT_MIN;

int cnt = 1;
int ans = 0;

void process(int num) {
    bool minusExist = (last1 == num - 1 || last2 == num - 1);
    bool numExist = (last1 == num || last2 == num);

    if (cnt > 0 && !minusExist) {
        cnt--;
        ans++;
    }

    if (cnt > 0 && !numExist) {
        last2 = last1;
        last1 = num;
        cnt--;
        ans++;
    }

    if (cnt > 0) {
        last2 = last1;
        last1 = num + 1;
        cnt--;
        ans++;
    }

    cnt = 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> p(n);
    for (int &x : p) cin >> x;

    sort(p.begin(), p.end());

    for (int i = 1; i < n; i++) {
        if (p[i] != p[i - 1]) {
            process(p[i - 1]);
        } else {
            cnt++;
        }
    }

    process(p.back());

    cout << ans << "\n";
}