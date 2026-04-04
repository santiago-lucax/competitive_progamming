#include <bits/stdc++.h>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;

    string s;
    cin >> s;

    if (s.length() > 0 && s.length() < pow(10, 3)) {
        if (s[0] > 'Z') s[0] = toupper(s[0]);
    }

    cout << s << "\n";

    return 0;
}
