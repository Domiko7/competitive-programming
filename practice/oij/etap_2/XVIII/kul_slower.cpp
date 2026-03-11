#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string queue;
    cin >> n >> queue;
    int res = 0;
    int xs = count(queue.begin(), queue.end(), 'X');

    while (xs > 0) {
        for (int i = 0; i < n; i++) {
            if (i == 0 && queue[n - 1 - i] == 'X') {
                xs--;
                queue[n - 1 - i] = '.';
            } else if (queue[n - 1 - i] == '.' && (n - 2 - i >= 0 && queue[n - 2 - i] == 'X')) {
                queue[n - 1 - i] = 'X';
                queue[n - 2 - i] = '.'; 
            }
        }
        res++;
    }   

    cout << res << "\n";
}