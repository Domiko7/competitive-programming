#include <bits/stdc++.h>
using namespace std;

vector<int> lollypop;
unordered_map<int, int> occ;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        lollypop.push_back(a);
    }

    int r = 0;
    int best = 0;
    int bestLength = -1;

    for (int l = 0; l < n; l++) {
        while (r < n && best < 3) {
            occ[lollypop[r]]++;
            if (occ[lollypop[r]] >= 3) {
                best = 3;
            }
            r++;     
        }
        if (best >= 3 && (bestLength == -1 || r - l < bestLength)) {
            bestLength = r - l;
        }
        if (occ[lollypop[l]] == 3) {
            best = 0;   
        }
        occ[lollypop[l]]--;
    }

    if (bestLength == -1) {
        cout << "NIE" << "\n";
    } else {
        cout << bestLength << "\n";
    }
    
}