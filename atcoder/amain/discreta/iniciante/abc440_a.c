#include <stdio.h>
#define scanf (void)scanf

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    for (int i = 0; i < Y; i++) X *= 2;
    printf("%d\n", X);
    
    return 0;
}

