#include <bits/stdc++.h>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;

    int k, n; cin >> k >> n;

    while (n--) {
        if (k % 10 == 0) k /= 10;
        else k--;
    }

    cout << k << "\n";

    return 0;
}
