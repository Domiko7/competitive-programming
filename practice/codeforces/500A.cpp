#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int w) {
    visited[w] = true;
    for (int i = 0; i < graph[w].size(); i++) {
        if (!visited[graph[w][i]]) {
            dfs(graph[w][i]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, t;
    cin >> n >> t;

    graph.resize(n + 1);
    visited.resize(n + 1, false);

    for (int i = 1; i < n; i++) {
        int a;
        cin >> a;
        graph[i].push_back(a + i);
    }

    dfs(1);
    if (visited[t]) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    
}