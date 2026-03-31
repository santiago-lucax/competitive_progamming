#include "../array.hpp"

#define null nullptr

int main(int argc, char* argv[]) {
    Array<int> array(10); array.randomNums();
    int found = 0;
    int key = 13;
    int mid, start = 0, end = array.getLength() - 1;
    
    // exibir arranjo
    array.print();

    while ((start <= end) && !found) {
        mid = (start + end) / 2;

        if (array.data[mid] == key) found = 1;
        else if (array.data[mid] < key) start = mid + 1;
        else end = mid - 1;
    }

    cout << found << "\n";

    return 0;
}
