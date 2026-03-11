#include <bits/stdc++.h>
using namespace std;

int occ[1000005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int a[n];
    int maxVal = 0;

    fill(occ, occ + 1000005, -2);

    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        a[i] = l;
        if (occ[l] == -2) {
            occ[l] = i;
        } else {
            occ[l] = -1;
        }
        maxVal = max(maxVal, l);
    }

    pair<int, int> res = {0, 2024};

    for (int i = 1; i <= 1000000; i++) {
        pair<int, int> last = {0, -1};
        bool can = true;
        for (int j = i; j <= maxVal; j += i) {
            if (occ[j] == -1) {
                can = false;
                break;
            }

            if (occ[j] >= 0) {
                if (occ[j] > last.second) {
                    last.first++;
                    last.second = occ[j];
                } else {
                    last = {0, -1};
                    can = false;
                    break;
                }
            }   
        }
        if (res.first < last.first && can) {
            res = {last.first, i};
        }
    }

    cout << res.second << "\n";
    
}