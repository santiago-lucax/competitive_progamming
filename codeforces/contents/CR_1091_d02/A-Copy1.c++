#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int y = 0, s = 0;
    int n, k; cin >> n >> k;
    string ans;

    vi v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int j = 0;
    int* current[2] = {&y, &s};
    int* p = nullptr;
    if (n == 1) ans = "YES";
    else {
        for (int i = 0; i < n; i++) {
            int x = k;
            while (x > 0) {
                p = current[j % 2];
                //cout << *p << " " << p << "\n"; // teste
                (*p)++;
                x--;
                j++;
            }
        }

        if (&s == p) ans = "YES";
        else ans = "NO";
    }

    //cout << p << "\n";
    cout << ans << "\n";
    //cout << y << s << "\n"; // teste
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
