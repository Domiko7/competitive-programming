#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int s1, s2, s3, s4;
    int count = 0;

    cin >> s1 >> s2 >> s3 >> s4;

    set<int> soFar;

    for (int i : {s1, s2, s3, s4}) {
        if (soFar.contains(i)) {
            count++;
        } else {
            soFar.insert(i);
        }
    }

    cout << count << endl;
}