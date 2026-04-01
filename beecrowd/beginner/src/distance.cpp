#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;

    double n[4];
    for (int i = 0; i < 4; i++) cin >> n[i];

    double distance = sqrt(pow(n[2] - n[0], 2) + pow(n[3] - n[1], 2));

    cout << fixed << setprecision(4) << distance << endl;

    return 0;
}
