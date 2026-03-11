#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> divisors(int num) {
    vector<int> divs;
    for (int div = 1; div * div <= num; div++) {
        if (num % div == 0) {
            int div2 = num / div;
            divs.push_back(div);
            if (div2 != div) divs.push_back(div2);
        }
    }
    return divs;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool ans = false;

    ll field = (ll)c * (ll)d;

    vector<int> divs1 = divisors(c);
    vector<int> divs2 = divisors(d);


    for (int i : divs1) {
        for (int j : divs2) {
            ll x = (ll)i * (ll)j;
            ll y = field / x;
            if ((x <= a && y <= b) || (x <= b && y <= a)) {
                ans = true;
                break;
            }
        }
    }
 
    cout << (ans ? "TAK" : "NIE") << "\n";  
    
}
