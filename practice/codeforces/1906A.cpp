#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> n_cells = {
    {-1, -1}, {-1, 0}, {-1, 1},
    {0, -1},           {0, 1},
    {1, -1},  {1, 0},  {1, 1}
};

set<string> options;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a, b, c;
    cin >> a >> b >> c;

    vector<string> grid = {a, b, c};

    for (int i = 0; i < n_cells.size(); i++) {
        int x = 1 + n_cells[i].first;
        int y = 1 + n_cells[i].second;
        for (int j = 0; j < n_cells.size(); j++) {
            int x2 = 1 + n_cells[j].first;
            int y2 = 1 + n_cells[j].second;
            if (i != j) {
                string path = "";
                path += grid[x][y];
                path += grid[1][1];
                path += grid[x2][y2];

                options.insert(path);
            }
        }
    }

    cout << *options.begin() << "\n";
    
}