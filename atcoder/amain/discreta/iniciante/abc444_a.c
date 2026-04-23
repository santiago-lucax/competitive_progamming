#include <stdio.h>
#define scanf (void)scanf

int main() {
    int N, c, d, u;
    scanf("%d", &N);

    c = (N / 1)   % 10;
    d = (N / 10)  % 10;
    u = (N / 100) % 10;

    if (c == d && d == u) printf("Yes\n");
    else printf("No\n");

    return 0;
}

