#include <stdio.h>
#define scanf (void)scanf
#define ll long long

int main() {
    ll N, K;
    scanf("%lld %lld", &N, &K);
    int i = 0;
    for (int j = N + 1; N < K; j++, i++) N += j;
    printf("%d\n", i);

    return 0;
}

