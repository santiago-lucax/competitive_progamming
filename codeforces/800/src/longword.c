#include <stdio.h>

#define MAX 100000
#define ll long long 

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char word[100];
        scanf(" %[^\n]", word);

        int count = 0;
        int i = 0;
        while (word[i] != '\0') {
            if (word[i] != ' ') count++;
            i++;
        }

        if (count > 10) {
            printf("%c%d%c", word[0], count - 2, word[count - 1]);
        } else printf("%s", word);

        printf("\n");
    }

    return 0;
}
