#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;
    
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n < m) {
        cout << "YES\n";
        return;
    }

    int max_iguais_seguidos = 1;
    int iguais_atuais = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            iguais_atuais++;
            max_iguais_seguidos = max(max_iguais_seguidos, iguais_atuais);
        } else {
            iguais_atuais = 1;
        }
    }

    if (max_iguais_seguidos >= m) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}
