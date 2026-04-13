#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

typedef struct s_Hector {
    int* pos = nullptr;
    int steps = 0;
} Hector;

void solve() {
    ll n, m;
    if (!(cin >> n >> m)) return;
    
    vi a(n);
    for (int &x : a) cin >> x;

    Hector h;
    h.pos = &a[0];
    bool seen = false;
    while (!seen && h.steps <= n) {
        if (*h.pos == 0) seen = true; // seen?
        a[h.steps] = a[h.steps] % m; // chrono
        h.pos = &a[h.steps]; // point to next
        h.steps++;
    }

    seen ? cout << "yes" << "\n": cout << "no" << "\n";

}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t = 1;
    cin >> t; 

    while (t--) {
        solve();
    }
    
    return 0;
}
