#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    srand(time(NULL));

    int length = (rand() % 100) + 1;
    char usual_letter = 'a' + rand() % 26;
    char unusual_letter = 'a' + rand() % 26;
    int unusual_letter_index = rand() % (length - 1);

    cout << 1 << "\n";
    cout << length << "\n";

    string ans;
    
    for (int i = 0; i < length; i++) {
        if (i == unusual_letter_index) {
            cout << unusual_letter;
        } else {
            cout << usual_letter;
        }
    }
}