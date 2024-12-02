//
// Created by hanes on 12/1/2024.
//

#ifndef AVLTREE_H
#define AVLTREE_H

template <typename T>
struct AVLNode {
    T data;
    AVLNode* left;
    AVLNode* right;
    int height;

    AVLNode(T val) : data(val), left(nullptr), right(nullptr), height(1) {}
};

// AVL Tree implementation
template <typename T>
class AVLTree {
public:
    AVLNode<T>* root;

    AVLTree() : root(nullptr) {}

    AVLNode<T>* insert(AVLNode<T>* node, T value) {
        if (node == nullptr) {
            return new AVLNode<T>(value);
        }

        if (value < node->data) {
            node->left = insert(node->left, value);
        } else if (value > node->data) {
            node->right = insert(node->right, value);
        } else {
            return node; // Duplicate values are not allowed
        }

        node->height = 1 + max(getHeight(node->left), getHeight(node->right));
        return balance(node, value);
    }

    void insert(T value) {
        root = insert(root, value);
    }

    // Function to balance the tree
    AVLNode<T>* balance(AVLNode<T>* node, T value) {
        int balanceFactor = getBalance(node);

        // Left Left Case
        if (balanceFactor > 1 && value < node->left->data) {
            return rotateRight(node);
        }

        // Right Right Case
        if (balanceFactor < -1 && value > node->right->data) {
            return rotateLeft(node);
        }

        // Left Right Case
        if (balanceFactor > 1 && value > node->left->data) {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }

        // Right Left Case
        if (balanceFactor < -1 && value < node->right->data) {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }

        return node;
    }

    // Rotate Right
    AVLNode<T>* rotateRight(AVLNode<T>* y) {
        AVLNode<T>* x = y->left;
        AVLNode<T>* T2 = x->right;

        x->right = y;
        y->left = T2;

        y->height = 1 + max(getHeight(y->left), getHeight(y->right));
        x->height = 1 + max(getHeight(x->left), getHeight(x->right));

        return x;
    }

    // Rotate Left
    AVLNode<T>* rotateLeft(AVLNode<T>* x) {
        AVLNode<T>* y = x->right;
        AVLNode<T>* T2 = y->left;

        y->left = x;
        x->right = T2;

        x->height = 1 + max(getHeight(x->left), getHeight(x->right));
        y->height = 1 + max(getHeight(y->left), getHeight(y->right));

        return y;
    }

    int getHeight(AVLNode<T>* node) {
        return node == nullptr ? 0 : node->height;
    }

    int getBalance(AVLNode<T>* node) {
        return node == nullptr ? 0 : getHeight(node->left) - getHeight(node->right);
    }

    void inOrder(AVLNode<T>* node) {
        if (node != nullptr) {
            inOrder(node->left);
            cout << node->data << " ";
            inOrder(node->right);
        }
    }

    void visualize() {
        inOrder(root);
        cout << endl;
    }
};

#endif //AVLTREE_H
