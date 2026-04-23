#include <stdio.h>

int main() {
    int N, power = 1;
    (void)scanf("%d", &N);
    for (int i = 0; i < N; i++) power *= 2;
    printf("%d\n", power - (2 * N));

    return 0;
}

