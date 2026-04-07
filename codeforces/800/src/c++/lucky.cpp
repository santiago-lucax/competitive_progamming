#include <bits/stdc++.h>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;

    ll n, cnt = 0; cin >> n;

    while (n > 0) {
        ll d = n % 10;
        if (d == 4 || d == 7) cnt++;
        n /= 10;
    }

    cout << (cnt == 4 || cnt == 7 ? "YES\n" : "NO\n");

    return 0;
}
