#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;

    int k, n, w, price = 0;
    cin >> k >> n >> w;

    for (int i = 0; i < w; i++) {
        price += (i + 1) * k;
    }

    int change = price - n > 0 ? change = price - n : change = 0;
    cout << change << "\n";

    return 0;
}
