#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; n > i; i++) {
        int p;
        cin >> p;
        arr[p - 1] = i;
    }

    for (int i = 0; n > i; i++) {
        cout << arr[i] + 1 << " ";
    }
    
}
