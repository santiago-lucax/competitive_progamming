#include <bits/stdc++.h>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;

    int n, k;
    cin >> n >> k; // número de casos de teste

    int a[50];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int lim = a[k - 1];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= lim && a[i] > 0) count++;
    }

    cout << count << endl;

    return 0;
}
