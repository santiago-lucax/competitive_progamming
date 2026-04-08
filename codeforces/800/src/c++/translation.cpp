#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    // fast in/out
    fastio;

    string ans;
    bool valid = true;

    string s1; cin >> s1;
    string s2; cin >> s2;

    if (s1.length() == s2.length()) {
        int n = s1.length();
        for (int i = 0; valid && i < n; i++) {
            int j = n - i - 1;
            if (s1[i] != s2[j]) valid = false;
        }
        
        ans = valid ? "YES" : "NO";
    } else ans = "NO";
    
    cout << ans << "\n";

    return 0;
}
