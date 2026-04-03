#include <bits/stdc++.h>
using namespace std;

// atalhos úteis
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio;
    int n = 5, x = 0, y = 0, movimentos = 0;
    int matrix[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }

    while (x != 2) {
        if (x < 2) x++;
        else x--;
        movimentos++;
    }

    while (y != 2) {
        if (y < 2) y++;
        else y--;
        movimentos++;
    }

    cout << movimentos << "\n";

    return 0;
}
