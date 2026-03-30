// from time import sleep
// from os import system

// # V.01
// def loading():
//     bolinha = ''
//     cor = 31
//     for i in range(3):
//         for j in range(4):
//             system("clear")
//             print(f"\033[1;{cor}mLoading{bolinha}\033[m")
//             bolinha += '.'
//             cor += 1
//             if cor >= 37:
//                 cor = 31
//             if bolinha == "....":
//                 bolinha = ''
//             sleep(0.5)
//             system("clear")

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void limpar_tela() {

#ifdef _WIN32

    system("cls");

#else

    system("clear");

#endif

}

void newLoading() {

    char point[5];
    int color = 31;

    for (int x = 0; x < 3; x = x + 1) {

        for (int y = 0; y < 4; y = y + 1) {

            limpar_tela();
            printf("\e[0;%dmLoading%s\e[0m", color, point);
            strcat(point, ".");
            color = color + 1;
            if (color == 37) color = 31;
            if (strlen(point) == 4) point[0] = '\0';
            Sleep(500);
            limpar_tela();

        }

    }

}

int main() {

    while (TRUE) newLoading();

    return 0;

}