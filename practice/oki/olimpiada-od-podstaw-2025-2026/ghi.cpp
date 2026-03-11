#include <bits/stdc++.h>
using namespace std;

int n, m, a, b, u, v;
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
    
    cin >> n >> m >> a >> b;

    graph.resize(n + 1);
    visited.resize(n + 1, false);

    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(a);

    if (visited[b]) {
        cout << "TAK" << "\n";
    } else {
        cout << "NIE" << "\n";
    }
}