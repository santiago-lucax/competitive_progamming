#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 0;
    scanf("%d", &n);

    int size = 0;

    char* name = NULL;

    char* compareName = NULL;

    for (int x = 0; x < n; x = x + 1) {

        scanf("%d", &size);

        name = malloc(size * sizeof(char)) + 1;
        compareName = malloc(size * sizeof(char)) + 1;
        scanf("%s %s", name, compareName);

        if

    }


    return 0;

}