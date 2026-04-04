#include <bits/stdc++.h>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;

    int alpha[26] = {0}; // array for alphabet
    string nick;
    cin >> nick; // read

    for (int i = 0; i < nick.length(); i++) {
        if (alpha[nick[i] - 'a'] == 0) alpha[nick[i] - 'a'] = 1;
    }

    auto counter = [alpha]() {
        int ct = 0;
        for (int i = 0; i < 26; i++) {
            if (alpha[i] == 1) ct++;
        }
        return ct;
    };
    
    int count = counter();
    cout << (count % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << "\n";

    return 0;
}
