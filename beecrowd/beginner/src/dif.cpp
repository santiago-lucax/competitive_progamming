#include <bits/stdc++.h>
#include <iomanip>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    fastio;

    int a, b, c, d;
    
    cin >> a >> b >> c >> d;
    int dif = a * b - c * d;
    
    cout << "DIFERENCA = " << dif << "\n";
    
    return 0;
}
