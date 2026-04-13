#include <bits/stdc++.h>
#include <iomanip>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    fastio;

    double a, b, c;
    
    cin >> a >> b >> c;
    double media = (((a * 2.0) + (b * 3.0) + (c * 5.0)) / 10);
    double m = min (10.0, media);
    
    cout << "MEDIA = " << fixed << setprecision(1) << m << "\n";
    
    return 0;
}
