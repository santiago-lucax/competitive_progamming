#ifndef NODE_HPP
#define NODE_HPP

#define null nullptr

template <typename T>
class Node {
public:
    T value;
    Node* link;

    Node() : value(0), link(null) {}
    Node(T value) : value(value), link(null) {}
    Node(T value, Node<T>* link) : value(value), link(link) {}

    Node<T>* connect(Node<T>* second) {
        if (second != null) this->link = second;
        return this;
    }

    void set_link(Node<T>* link) {
        this->link = link;
    }

    Node<T>* get_link() {
        return this->link;
    }

    void print() {
        Node<T>* cursor = this;
        while (cursor != null) {
            std::cout << cursor->value << " ";
            cursor = cursor->link;
        }
        std::cout << std::endl;
    }

    ~Node() { /*nao necessario*/ }
};

#endif
