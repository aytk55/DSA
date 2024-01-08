#include <iostream>

struct Node {
    int data;
    Node* rightChild;
    Node* leftChild;

    Node(int value) : data(value), rightChild(nullptr), leftChild(nullptr) {
    }
};

class BinaryTree {
private:
    Node* root;

public:
    BinaryTree() : root(nullptr) {
    }

    void add(Node*& current, int x) {
        if (current == nullptr) {
            current = new Node(x);
        }
        else if (x < current->data) {
            add(current->leftChild, x);
        }
        else if (x > current->data) {
            add(current->rightChild, x);
        }
    }

    void add(int x) {
        add(root, x);
    }

    // In-order traversal (left, root, right)
    void inOrderTraversal(Node* current) {
        if (current != nullptr) {
            inOrderTraversal(current->leftChild);
            std::cout << current->data << " ";
            inOrderTraversal(current->rightChild);
        }
    }

    // Pre-order traversal (root, left, right)
    void preOrderTraversal(Node* current) {
        if (current != nullptr) {
            std::cout << current->data << " ";
            preOrderTraversal(current->leftChild);
            preOrderTraversal(current->rightChild);
        }
    }

    // Post-order traversal (left, right, root)
    void postOrderTraversal(Node* current) {
        if (current != nullptr) {
            postOrderTraversal(current->leftChild);
            postOrderTraversal(current->rightChild);
            std::cout << current->data << " ";
        }
    }

    // Wrapper functions for traversals
    void inOrderTraversal() {
        inOrderTraversal(root);
    }

    void preOrderTraversal() {
        preOrderTraversal(root);
    }

    void postOrderTraversal() {
        postOrderTraversal(root);
    }
};

int main() {
    BinaryTree tree;
    tree.add(5);
    tree.add(3);
    tree.add(7);

    std::cout << "In-order traversal: ";
    tree.inOrderTraversal();
    std::cout << std::endl;

    std::cout << "Pre-order traversal: ";
    tree.preOrderTraversal();
    std::cout << std::endl;

    std::cout << "Post-order traversal: ";
    tree.postOrderTraversal();
    std::cout << std::endl;

    return 0;
}
