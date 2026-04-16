#include <iostream>

using namespace std;

int main() {
    string entrada, saida; 
    int n;
    cin >> n >> entrada;

    if (entrada[0] == 'o') {
        int i = 0;
        while (entrada[i] == 'o') i++;
        while (i < n) {
            saida += entrada[i];
            i++;
        }

        cout << saida << "\n";
    } else cout << entrada << "\n";

    return 0;
}
