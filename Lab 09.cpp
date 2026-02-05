#include <iostream>
using namespace std;

// Structure of a tree node
struct Node {
    int data;          // Data stored in node
    Node* left;        // Pointer to left child
    Node* right;       // Pointer to right child
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node(); // Allocate memory
    newNode->data = value;      // Assign data
    newNode->left = NULL;       // Initialize left child
    newNode->right = NULL;      // Initialize right child
    return newNode;
}

// Inorder Traversal: Left -> Root -> Right
void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    // Creating the tree
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}

