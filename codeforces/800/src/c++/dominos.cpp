#include <bits/stdc++.h>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;
    int m, n;
    cin >> m >> n;
    if (m >= 1 && m <= n && n <= 16) cout << (m * n) / 2 << endl;
    return 0;
}
