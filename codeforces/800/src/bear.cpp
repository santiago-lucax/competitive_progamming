#include <bits/stdc++.h>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;

    int a, b; cin >> a >> b;
    int years = 0;

    while (a <= b) {
        a = a * 3;
        b = b * 2;
        years++;
    }

    cout << years << "\n";

    return 0;
}
