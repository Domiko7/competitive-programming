#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> graph;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    pair<int, int> a, b, c;

    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    cin >> c.first >> c.second;

    graph.resize(n + 1);

    vector<pair<int, int>> directions = {
        {}, {}, {},
        {}, {}, {},
        {}, {}, {}
    };

}