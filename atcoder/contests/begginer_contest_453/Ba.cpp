#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int t, x;
    cin >> t >> x;

    int* a = new int[t + 1];
    for (int i = 0; i < t + 1; i++) cin >> a[i];

    int* cursor = &a[0];
    cout << 0 << " " << a[0] << "\n";
    for (int i = 1; i <= t; i++) {
        if (abs(a[i] - *cursor) >= 10) {
            cout << i << " " << a[i] << "\n";
            cursor = &a[i];
        }
    }

    return 0;
}
