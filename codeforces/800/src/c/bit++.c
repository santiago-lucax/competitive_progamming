#include <stdio.h>

#define MAX 100000

int str_len(char string[]) {

    int x = 0;
    while (string[x] != '\0') x++;
    return x;

}

int main() {

    int x = 0;
    int t = 0;
    scanf("%d", &t);
    if (t >= 1 && t <= 150) {

        while (t--) {

            char line[100];
            scanf(" %[^\n]", line);

            for (int i = 0; i < str_len(line); i++) {

                if (line[i] == 'X') {

                    if (i >= 2 && i <= str_len(line) - 2) {

                        if ((line[i - 2] == '-' && line[i - 1] == '-') || (line[i + 1] == '-' && line[i + 2] == '-')) {
                            x--;

                        } else if ((line[i - 2] == '+' && line[i - 1] == '+') || (line[i + 1] == '+' && line[i + 2] == '+')) {
                            x++;
                        }

                    } else if (i < 2) {

                        if (line[i + 1] == '-' && line[i + 2] == '-') x--;
                        if (line[i + 1] == '+' && line[i + 2] == '+') x++;

                    } else {

                        if (line[i - 2] == '-' && line[i - 1] == '-') x--;
                        if (line[i - 2] == '+' && line[i - 1] == '+') x++;

                    }

                }

            }

        }

        printf("%d\n", x);

    }

    return 0;
}
