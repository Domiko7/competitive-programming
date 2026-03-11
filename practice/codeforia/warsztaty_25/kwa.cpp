#include <bits/stdc++.h>
using namespace std;

int n;

vector<vector<vector<int>>> prefix_sum;

int get_sum(int num, int x1, int y1, int x2, int y2) {
    return prefix_sum[num][x2 + 1][y2 + 1] - prefix_sum[num][x1][y2 + 1] - prefix_sum[num][x2 + 1][y1] + prefix_sum[num][x1][y1];
}

bool does_exist(int k, int goal) {
    for (int i = 0; i < n - k + 1; i++) {
        for (int j = 0; j < n - k + 1; j++) {
            for (int num = 0; num < 10; num++) {
                int res = get_sum(num, i, j, i + k - 1, j + k - 1);
                if (res >= goal) {
                    return true;
                }
            }
        }   
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k;
    cin >> n >> k;

    prefix_sum.resize(10, vector<vector<int>>(n + 1, vector<int>(n + 1)));  
 
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            int d = s[j] - '0';
            for (int num = 0; num < 10; num++) {
                prefix_sum[num][i + 1][j + 1] =
                    prefix_sum[num][i][j + 1] +
                    prefix_sum[num][i + 1][j] -
                    prefix_sum[num][i][j] +
                    (num == d);
            }
        }
    }

    //cout << does_exist(3, k);

    int low = 0;
    int high = n;
    bool ever_changed = false;

    while (high - low > 1) {
        int mid = low + (high - low) / 2;
        if (does_exist(mid, k)) {
            high = mid;
            ever_changed = true;
        } else {
            low = mid;
        }
    }

    if (ever_changed) {
        cout << high << "\n";
    } else {
        cout << 0 << "\n";
    }
    
}