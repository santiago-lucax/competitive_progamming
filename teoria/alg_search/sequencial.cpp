#include "../array.hpp"

int main(int argc, char *argv[]) {
    Array<int> array(10); array.randomNums();
    int key = 4;
    int found = 0;

    // exibir arranjo gerado
    array.print();

    for (int i = 0; i < array.length && !found; i++) {
        if (array.data[i] == key) found = 1;
    }

    if (found) cout << key << " foi encontrado!" << "\n";
    else cout << key << " nao encontrado." << "\n";

    return 0;
}
