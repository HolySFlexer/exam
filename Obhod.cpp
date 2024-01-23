struct Node {
    int data;
    Node* left;
    Node* right;
};

void postorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}
Sim
struct Node {
    int data;
    Node* left;
    Node* right;
};

void inorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

Pryam

struct Node {
    int data;
    Node* left;
    Node* right;
};

void preOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    cout << root->data << " "; // выводим значение текущего узла
    preOrderTraversal(root->left); // рекурсивно обходим левое поддерево
    preOrderTraversal(root->right); // рекурсивно обходим правое поддерево
}
