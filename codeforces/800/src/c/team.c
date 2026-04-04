#include <stdio.h>

#define MAX 100000
#define ll long long

int main() {

    int n1 = 0, n2 = 0, n3 = 0;
    int solve = 0;

    int t = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {

        scanf("%d %d %d", &n1, &n2, &n3);
        if (n1 + n2 + n3 >= 2) solve++;

    }

    printf("%d", solve);
    printf("\n");

    return 0;

}
