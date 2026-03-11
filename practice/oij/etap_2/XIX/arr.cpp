#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string path;
    cin >> path;

    pair<int, int> xy = {0, 0};

    for (int i = 0; i < path.size(); i++) {
        if (path[i] == 'G') {
            xy.second++;
        } else if (path[i] == 'D') {
            xy.second--;
        } else if (path[i] == 'L') {
            xy.first--;
        } else {
            xy.first++;
        }
    }

    string res;

    while (xy.first != 0) {
        if (xy.first > 0) {
            res += "L";
            xy.first--;
        } else {
            res += "P";
            xy.first++;
        }
    }

    while (xy.second != 0) {
        if (xy.second > 0) {
            res += "D";
            xy.second--;
        } else {
            res += "G";
            xy.second++;
        }
    }

    cout << res << endl;
}