#include "../Array.hpp"

#define null nullptr

int main(int argc, char* argv[]) {
    Array<int> array(10); array.randomNums();

    // selection sort mais custoso ("bubble simplificado") (tempo = O(n²); espaco = O(1))
    for (int i = 0; i < array.length - 1; i++) {
        for (int j = i + 1; j < array.length; j++) {
            if (array.data[i] > array.data[j]) array.swap(i, j);
        }
    }

    int found = 0;
    int key = 13;
    int mid, start = 0, end = array.length - 1;
    
    // exibir arranjo
    array.print();

    // o arranjo deve estar ordenado para que a busca binaria funcione
    while ((start <= end) && !found) {
        mid = (start + end) / 2;

        if (array.data[mid] == key) found = 1;
        else if (array.data[mid] < key) start = mid + 1;
        else end = mid - 1;
    }

    cout << found << "\n";

    return 0;
}
