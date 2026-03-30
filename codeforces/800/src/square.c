#include <stdio.h>

int main () {

    int a = 0, b = 0, c = 0, d = 0;

    int n = 0;
    scanf("%d", &n);
    getchar();

    for (int x = 0; x < n; x = x + 1) {

        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (a == b && b == c && c == d) printf("YES\n");
        else printf("NO\n");

    }

    return 0;

}
