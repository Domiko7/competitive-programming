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

    int w = 0;
    int verticalLeft = 0;
    int horizontalLeft = 0;

    while (!blocks.empty()) {
        int curr = blocks.back();
        blocks.pop_back();

        if (curr <= verticalLeft) {
            verticalLeft -= curr;
        } else if (curr <= horizontalLeft) {
            horizontalLeft -= curr;
        } else {
            if (verticalLeft > 0 && curr <= w) {
                horizontalLeft = w - curr;
                verticalLeft--;
            } else if (curr <= h) {
                w++;
                horizontalLeft = 1;
                verticalLeft = h - curr;
            } else {
                w += curr;
                horizontalLeft = curr;
                verticalLeft = h - 1;
            }
        }
    }

    //for (auto i : blocks) cout << i << " ";

    cout << w << "\n";
    
}