#include <bits/stdc++.h>
#include <cctype>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); // aumentar velocidade de entrada e saida
#define ll long long

int main() {
    fastio;

    int compare = 0;
    string s1, s2;
    cin >> s1; cin >> s2;

    int i = 0;
    bool OK = true;
    while (OK && i < s1.length()) {
        int x = (int)tolower(s1[i]);
        int y = (int)tolower(s2[i]);
        if (x != y) {
            x < y ? compare = -1 : (x > y ? compare = 1 : compare = 0);
            OK = false;
        }
        i++;
    }
    cout << compare << "\n";

    return 0;
}
