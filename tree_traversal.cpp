#include <iostream>

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BinaryTree {
private:
    Node* root;

    void inorder(Node* node) {
        if (node) {
            inorder(node->left);
            std::cout << node->data << " ";
            inorder(node->right);
        }
    }

    void preorder(Node* node) {
        if (node) {
            std::cout << node->data << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }

    void postorder(Node* node) {
        if (node) {
            postorder(node->left);
            postorder(node->right);
            std::cout << node->data << " ";
        }
    }

public:
    BinaryTree() {
        root = nullptr;
    }

    void insert(int data) {
        root = insertRec(root, data);
    }

    Node* insertRec(Node* node, int data) {
        if (!node) {
            return new Node(data);
        }

        if (data < node->data) {
            node->left = insertRec(node->left, data);
        } else if (data > node->data) {
            node->right = insertRec(node->right, data);
        }

        return node;
    }

    void inorder() {
        inorder(root);
        std::cout << std::endl;
    }

    void preorder() {
        preorder(root);
        std::cout << std::endl;
    }

    void postorder() {
        postorder(root);
        std::cout << std::endl;
    }
};

int main() {
    BinaryTree tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    std::cout << "In-order traversal: ";
    tree.inorder();

    std::cout << "Pre-order traversal: ";
    tree.preorder();

    std::cout << "Post-order traversal: ";
    tree.postorder();

    return 0;
}
