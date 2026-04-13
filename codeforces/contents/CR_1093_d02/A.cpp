#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vi a(n);
    for (int &x : a) cin >> x;

    sort(a.begin(), a.end(), greater<int>());

    bool repeat = false;
    for (int i = 0; i < n - 1 && !repeat; i++) {
        if (a[i] == a[i + 1]) {
            repeat = true;
        }
    }

    if (repeat) cout << -1 << "\n";
    else {
        for (int i = 0; i < n; i++) {
            cout << a[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
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
