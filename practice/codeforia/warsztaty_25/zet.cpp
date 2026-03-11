#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    string s;
    cin >> n >> m >> s;

    vector<int> activate(n + 1);
    vector<int> deactivate(n + 1);
    
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        activate[a - 1]++;
        deactivate[b]++;
    }
    vector<int> prefix(n + 1, 0);

    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + activate[i] - deactivate[i];
    }   

    //for (auto i : prefix) cout << i << " ";

    vector<char> rotate(256);
    rotate['A'] = 'R';
    rotate['R'] = 'A';

    for (int i = 1; i <= n; i++) {
        if (prefix[i] % 2 == 1) {
            cout << rotate[s[i - 1]];
        } else {
            cout << s[i - 1];
        }
    }

    cout << "\n";

}