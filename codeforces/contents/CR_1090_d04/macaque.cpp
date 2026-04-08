#include <bits/stdc++.h>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;

    int t, x;
    cin >> t; 

    while (t--) {
        cin >> x;

        int y = min(67, x + 1);
        cout << y << "\n";
    }

    return 0;
}
