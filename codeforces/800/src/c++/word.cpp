#include <bits/stdc++.h>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;

    int min = 0, maisc = 0;
    string word; cin >> word;

    for (char c : word) {
        if (islower(c)) min++;
        else if (isupper(c)) maisc++;
    }

    if (min >= maisc) transform(word.begin(), word.end(), word.begin(), ::tolower);
    else transform(word.begin(), word.end(), word.begin(), ::toupper);

    cout << word << "\n";
    return 0;
}
