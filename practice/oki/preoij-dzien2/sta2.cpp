#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> grid;
vector<pair<int, int>> neighbour_indicies = {
        {0, -1},
{-1, 0},        {1, 0},
        {0, 1}
};

vector<int> get_neighbours(int x, int y) {
    for (pair<int, int> xy : neighbour_indicies) {
        int new_x = x + xy.first;
        int new_y = y + xy.second;
        if (new_x >= 0 && new_y >= 0 && new_x )
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    grid.assign(n, {});
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            grid[i].push_back(a);
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
    
}