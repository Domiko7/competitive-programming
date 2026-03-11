#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++) cin >> arr[i];

        vector<bool> visited(n + 1, false);
        bool ans = true;

        for (int i = 1; i <= n; i++) {
            if (visited[i]) continue;

            set<int> island;
            set<int> idxs;

            for (int j = i; j <= n; j *= 2) {
                visited[j] = true;
                island.insert(arr[j]);
                idxs.insert(j);
            }

            if (island != idxs) {
                ans = false;
                break;
            }
        }

        cout << (ans ? "YES" : "NO") << "\n";
    }
    
}