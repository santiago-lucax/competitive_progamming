#include <bits/stdc++.h>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;
    int x; cin >> x;
    int steps = 0;

    if (x % 5 == 0) steps = x / 5;
    else steps = (x / 5) + 1;

    cout << steps << "\n";

    return 0;
}
