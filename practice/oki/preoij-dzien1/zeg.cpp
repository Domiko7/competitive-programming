#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n;
    vector<ll> d(n);
    for (auto &i : d) cin >> i;
    cin >> q;
    vector<pair<ll, int>> a;

    for (int i = 0; i < q; i++) {
        ll ai;
        cin >> ai;
        a.push_back({ai, i});
    }

    sort(d.begin(), d.end());
    sort(a.begin(), a.end());

    int j = 0;
    int offset = 0;

    // PAMIETAJ ZEBYS UWZGLEDNIL KIEDY ZAPYTANIA BEDA WIEKSZE OD PIERWSZEGO ELEMENTU

    vector<ll> ans(q);

    for (int i = 0; i < q; i++) {
        ll curr = a[i].first;
        while (j <= d.size() - 1 && curr + offset >= d[j]) {
            j++;
            offset++;
        }
        ans[a[i].second] = curr + offset;
    }

    for (auto i : ans) cout << i << "\n";
}