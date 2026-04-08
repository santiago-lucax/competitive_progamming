#include <iostream>
#include <iomanip>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    double PI = 3.14159;
    double r; cin >> r;
    cout << "A=" << fixed << setprecision(4) << PI * (r*r) << "\n";
 
    return 0;
}
