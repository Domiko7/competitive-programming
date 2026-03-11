#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// O nie zamieniam sie w wiktora gatnera i pisze komentarze :shocked:

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // wcztujemy n
    ll n;
    cin >> n;

    // n nigdy nie jest podzielne przez n - 1
    ll min = 2;
    ll max = n - 1;

    // szukamy minimalnej lol (znając życie jest na to wzorek ale idrc)
    while (n % min == 0) {
        min++;
    }

    // wypisujemy
    cout << min << " " << max << "\n";
    
}