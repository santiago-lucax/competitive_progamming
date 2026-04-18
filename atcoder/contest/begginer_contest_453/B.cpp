#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, x, a, b;
    cin >> t >> x;

    cin >> a;
    b = a;
    cout << 0 << " " << a << "\n";
    for (int i = 1; i <= t; i++) {
        cin >> a;
        if (abs(a - b) >= x) {
            cout << i << " " << a << "\n";
            b = a;
        }
    }

    return 0;
}
