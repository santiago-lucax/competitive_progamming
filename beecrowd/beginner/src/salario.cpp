#include <bits/stdc++.h>
#include <iomanip>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    fastio;

    int n, h;
    double r;
    cin >> n >> h >> r;
    cout << "NUMBER = " << n << "\n"
         << "SALARY = U$ " << fixed << setprecision(2) << (double)(h * r) << "\n";

    return 0;
}
