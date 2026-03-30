#include <stdio.h>

#define MAX 100000

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int v[MAX];
        for (int i = 0; i < n; i++) {
            scanf("%d", &v[i]);
        }

        // lógica aqui

        printf("\n");
    }

    return 0;
}
