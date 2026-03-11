#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, h;
vector<vector<int>> graph;
vector<vector<int>> dp;
int ans = 1;

vector<pair<int, int>> neighbours = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

int dfs(int y, int x) {

    if (dp[y][x] != -1) return dp[y][x];

    dp[y][x] = 1;
    
    for (auto [fy, fx] : neighbours) {
        int dy = y + fy;
        int dx = x + fx;

        if (dy >= 0 && dy < n && dx >= 0 && dx < m && graph[y][x] < graph[dy][dx]) {
            dp[y][x] = max(dp[y][x], 1 + dfs(dy, dx));
        }
    }

    ans = max(ans, dp[y][x]);

    return dp[y][x];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    graph.resize(n, vector<int>(m, 0));
    dp.resize(n, vector<int>(m, -1));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> h;
            graph[i][j] = h;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            dfs(i, j);
        }
    }
    cout << ans << "\n";

    return 0;
}