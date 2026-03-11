#include <bits/stdc++.h>
using namespace std;

int n, m, a, b, c, q, x, y, res, node;
vector<vector<int>> graph;
map<pair<int, int>, int> costy;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;

    graph.resize(m + 1);
    visited.resize(m + 1, false);
    
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        graph[a].push_back(b);
        graph[b].push_back(a);
        costy[{a, b}] = c;
        costy[{b, a}] = c;
    }

    cin >> q;


}