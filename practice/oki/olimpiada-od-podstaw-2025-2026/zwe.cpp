#include <bits/stdc++.h>
using namespace std;

vector<int> wedkarzy;
int n, w, x;

bool check(int dist) {
    int cnt = 1;
    int last = wedkarzy[0];

    for (int i = 1; i < n; i++) {
        if (abs(wedkarzy[i] - last) < dist) continue;

        cnt++;

        if (cnt >= w) {
            return true;
        }

        last = wedkarzy[i];
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> w;

    wedkarzy.resize(n);

    for (int i = 0; i < n; i++) cin >> wedkarzy[i];

    int low = 0;
    int high = wedkarzy.back() - wedkarzy.front();

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