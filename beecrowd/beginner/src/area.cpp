#include <bits/stdc++.h>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {

    fastio;
    const double PI = acos(-1);

    double a, b, c;
    cin >> a >> b >> c;

    // ERRO NAS CASAS DECIMAIS
    cout << "TRIANGULO: " << fixed << setprecision(3) << a * c / 2 << "\n";
    cout << "CIRCULO: " << fixed << setprecision(3) << PI * (c * c) << "\n";
    cout << "TRAPEZIO: " << fixed << setprecision(3) << (a + b) * c / 2 << "\n";
    cout << "QUADRADO: " << fixed << setprecision(3) << b * b << "\n";
    cout << "RETANGULO: " << fixed << setprecision(3) << a * b << "\n";

    return 0;

}
