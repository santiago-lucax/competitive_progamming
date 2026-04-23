#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n; // read size
    double tk = 0.5;

    int cnt = 0, aux = -1;
    bool pos = true;

    for (int i = 0; i < n; i++) {
        double x; cin >> x; // read new value
        tk = tk + (aux * x);

        if (!pos && tk > 0) {
            pos = true;
            aux = -1;
            cnt++;
        } else if (pos && tk < 0) {
            pos = false;
            aux = 1;
            cnt++;
        }

    }
    
    cout << cnt << "\n";

    return 0;
}
