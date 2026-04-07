#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;

    int k, n, w;
    cin >> k >> n >> w;

    int price = k * w * (w + 1) / 2;

    int change = max(0, price - n);
    cout << change << "\n";

    return 0;
}
