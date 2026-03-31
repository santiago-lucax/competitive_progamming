#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

template <typename T>
class Array {
public:
    T *data;
    int length;
    int n;

    Array() : data(nullptr), length(0), n(0) {
        srand(time(0));
    }

    Array(int length) : data(new T[length]), length(length), n(0) {
        srand(time(0));
    }

    void randomNums() {
        if (this->data != nullptr &&
            this->length > 0 &&
            this->n < this->length) {
            for (int i = this->n; i < this->length; i++) {
                int random = rand() % 100;
                this->data[i] = random;
            }
            this->n = this->length;
        }
    }

    void print() {
        if (this->n > 0) {
            for (int i = 0; i < this->n; i++) {
                cout << this->data[i] << " ";
            }
            cout << "\n";
        }
    }

    ~Array() {
        delete[] data;
        data = nullptr;
    }
};

#endif
