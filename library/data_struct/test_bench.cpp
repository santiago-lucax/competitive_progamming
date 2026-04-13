#include "../Array.hpp"
#include "Node.hpp"

void arrayTest() {
    Array<int> array(10); array.randomNums();
    array.print();
}

void nodeTest() {
    Node<int>* a1 = new Node(3);
    Node<int>* a2 = new Node(1);
    Node<int>* a3 = new Node(2);

    a1->connect(a2);
    a2->connect(a3);

    a1->print();
}

int main(int argc, char* argv[]) {
    int opt = 1;
    do {
        std::cout << "Digite uma opcao: ";
        std::cin >> opt;
        std::cout << std::endl;
        switch (opt) {
            case 1: arrayTest(); break;
            case 2: nodeTest(); break;
            default: break;
        }
    } while(opt != 0);

    return 0;
}
