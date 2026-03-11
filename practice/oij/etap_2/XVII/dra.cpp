#include <bits/stdc++.h>
using namespace std;

int n, m;
bool possible = true;
vector<vector<int>> graph;

vector<int> findEdges() {
    vector<int> edges;
    for (int i = 1; i <= n; i++) {
        if (graph[i].size() == 1) {
            edges.push_back(i);
        } else if (graph[i].size() != 3) {
            possible = false;
            return {-1};
        }
    }
    return edges;
}

pair<int, int> findNeighbourEdge(vector<int> edges, int edge) {
    vector<int> neighbours = graph[graph[edge][0]];
    for (auto neighbour : neighbours) {
        for (auto potentialEdge : edges) {
            if (graph[potentialEdge][0] == neighbour && potentialEdge != edge) {
                return {edge, potentialEdge};
            }
        }
    }
    possible = false;
    return {-1, -1};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;

    graph.resize(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> edges = findEdges();
    if (!possible) { cout << "NIE"; return 0; };
    pair<int, int> pairOfEdges1 = findNeighbourEdge(edges, edges[0]);
    if (!possible) { cout << "NIE"; return 0; };
    int newEdge = -1;
    for (auto edge : edges) {
        if (edge != pairOfEdges1.first && edge != pairOfEdges1.second) {
            newEdge = edge;
            break;
        }
    }
    if (newEdge == -1) { cout << "NIE"; return 0; };
    pair<int, int> pairOfEdges2 = findNeighbourEdge(edges, newEdge);
    if (!possible) { cout << "NIE"; return 0; };
    pair<int, int> curr = {graph[pairOfEdges1.first][0], graph[pairOfEdges1.second][0]};
    pair<int, int> old = {pairOfEdges1.first, pairOfEdges1.second};
    vector<pair<int, int>> ans = {
        {pairOfEdges1.first, pairOfEdges1.second},
        {graph[pairOfEdges1.first][0], graph[pairOfEdges1.second][0]}
    };

    for (int i = 2; i < n / 2; i++) {
        int cand1 = -1;
        int cand2 = -1;

        for (auto neighbour : graph[curr.first]) {
            if (neighbour != curr.first && neighbour != curr.second && neighbour != old.first && neighbour != old.second) {
                cand1 = neighbour;
                break;
            }
        }

        for (auto neighbour : graph[curr.second]) {
            if (neighbour != curr.first && neighbour != curr.second && neighbour != old.first && neighbour != old.second && neighbour != cand1) {
                cand2 = neighbour;
                break;
            }
        }

        if (cand1 != -1 && cand2 != -1) {
            old = curr;
            curr = {cand1, cand2};
            ans.push_back({cand1, cand2});
        } else {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "TAK" << "\n";
        for (auto p : ans) cout << p.first << " " << p.second << "\n";
    } else {
        cout << "NIE";
    }
    return 0;
}