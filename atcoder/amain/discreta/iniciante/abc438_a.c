#include <stdio.h>

int main() {
    int D, F, N;
    (void)scanf("%d %d", &D, &F);
    N = (D - F) % 7;
    printf("%d\n", 7 - N);

    return 0;
}
