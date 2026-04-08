#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio;

    int a = 0, d = 0;

    ll t = 1;
    cin >> t;
    string str; cin >> str;
    while (t--) {
        if (str[t] == 'A') a++;
        else d++;
    }

    cout << (a == d ? "Friendship" : (a > d ? "Anton" : "Danik"));
    cout << "\n";

    return 0;
}
