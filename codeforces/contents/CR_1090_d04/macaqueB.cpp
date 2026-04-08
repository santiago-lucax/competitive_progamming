#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int t;
    cin >> t;

    while (t--) {
        vector<int> v(7);
        int big = -1000;

        for (int &i : v) {
            cin >> i;
            if (i > big) big = i;
        }

        bool ok = false;
        for (int &i : v) {
            if (!ok && i == big) {
                ok = true;
            } else {
                i = -i;
            }
        }

        cout << accumulate(v.begin(), v.end(), 0) << "\n";
    }
}
