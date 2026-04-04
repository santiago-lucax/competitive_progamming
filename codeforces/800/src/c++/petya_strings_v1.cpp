#include <bits/stdc++.h>
#include <cctype>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int toMinus(char c) {
    char x = c;
    if (c >= 'A' && c <= 'Z') x = x + 32;
    return (int)x;
}

int main() {
    fastio;
    int compare;

    string s1, s2;
    cin >> s1; cin >> s2;

    int c1 = 0, c2 = 0;
    for (int i = 0; i < s1.length(); i++) c1 = c1 + toMinus(s1[i]);
    for (int j = 0; j < s2.length(); j++) c2 = c2 + toMinus(s2[j]);

    if (c1 < c2) compare = -1;
    else if (c2 < c1) compare = 1;
    else compare = 0;

    cout << compare << "\n";
    return 0;
}
