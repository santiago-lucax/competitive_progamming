#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;

    int count = 0;
    int n = 0; cin >> n;
    string s; cin >> s;

    for (int i = 0; i < n; i++) {
        if (i == 0 && s.length() >= 1) {
            if (s[i] == s[i + 1]) {
                s.erase(i, 1);
                count++;
            }
        } else if (i == n - 1) {
            if (s[i] == s[i - 1] && s.length() >= 1) {
                s.erase(i, 1);
                count++;
            }
        } else {
            if (s[i] == s[i - 1] || s[i] == s[i + 1]) {
                s.erase(i, 1);
                count++;
        }
        }
    }

    cout << count << "\n";

    return 0;
}
