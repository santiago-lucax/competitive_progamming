#include <bits/stdc++.h>
#include <iostream> // nao necessario, ja inclusa anteriormente
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;

    int count = 0; // int n, count = 0;
    int n = 0; cin >> n;
    string s; cin >> s;
    // cin >> n >> s;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) count++;
        // count += (s[i] == s[i - 1]);
    }
    
    cout << count << "\n";

    return 0;
}
