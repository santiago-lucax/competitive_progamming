#include <bits/stdc++.h>
#include <vector>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;
    string s;
    cin >> s;

    for (int i = 0; i < s.length() - 1; i += 2) {
        int small = i;
        for (int j = i + 2; j < s.length(); j += 2) {
            if (s[small] > s[j]) small = j;
        }

        int tmp = s[small];
        s[small] = s[i];
        s[i] = tmp;
    }

    cout << s << "\n";

    return 0;
}
