#include <bits/stdc++.h>
#include <iomanip>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    fastio;

    double a, b;
    
    cin >> a >> b;
    double media = (((a * 3.5) + (b * 7.5)) / 11);
    double m = min (10.0, media);
    
    cout << "MEDIA = " << fixed << setprecision(5) << m << "\n";
    
    return 0;
}
