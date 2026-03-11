#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, h;
    cin >> n >> h;

    vector<int> blocks = {1, 1};

    for (int i = 2; i < n; i++) {
        blocks.push_back(blocks[blocks.size() - 1] + blocks[blocks.size() - 2]);
    }

    
    
}