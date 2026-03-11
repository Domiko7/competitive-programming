#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, x, y;

struct Ball {
    ll x, y, idx;
};

vector<Ball> balls;
vector<vector<ll>> graph;
vector<ll> color;

ll dist(Ball a, Ball b) {
    ll dx = a.x - b.x;
    ll dy = a.y - b.y;
    return dx * dx + dy * dy;
}

bool dfs(ll v, ll c) {
    color[v] = c;
    for (ll u : graph[v]) {
        if (color[u] == -1) {
            if (!dfs(u, 1 - c)) return false;
        } else if (color[u] == c) {
            return false;
        }
    }
    return true;
}

bool check(ll d) {
    graph.assign(n, {});
    color.assign(n, -1);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (dist(balls[i], balls[j]) < (ll)d) {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (color[i] == -1) {
            if (!dfs(i, 0)) return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;

    balls.resize(n);
    for (ll i = 0; i < n; i++) {
        cin >> balls[i].x >> balls[i].y;
        balls[i].idx = i;
    }

    ll low = 0;
    ll high = 4e18;

    while (high - low > 1) {
        ll mid = low + (high - low) / 2;
        if (check(mid)) {
            low = mid;
        } else {
            high = mid;
        }
    }

    check(low);

    string ans(n, 'N');
    for (int i = 0; i < n; i++) {
        if (color[i] == 0) ans[balls[i].idx] = 'C';
    }

    cout << ans << "\n";
    
    return 0;
}