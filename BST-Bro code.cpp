#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    Node(int n) {
        data = n;
        left = NULL;
        right = NULL;
    }
};
struct Node *root = NULL;
struct Node *insertHelper(struct Node *root, struct Node *node) 
{
    if (root == NULL) {
        return node;
    }
   else if (node->data > root->data) {
        root->right = insertHelper(root->right, node); // Recur to the right subtree
    } 
    else if (node->data < root->data) {
        root->left = insertHelper(root->left, node); // Recur to the left subtree
    }
return root;
}
void insert(int data) {
    struct Node *newNode = new Node(data); // Create new node
    root = insertHelper(root, newNode);    // Use helper to insert
}
void inOrderTraversal(struct Node* root) {
    if (root == NULL) return;
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}
    int  searchHelper(struct Node *root,int key)
    {
        if(root == NULL)
        {
            return false;
        }
        else if(root->data == key)
        {
            return true;
        }
        else if(root->data > key)
        {
            return searchHelper(root->left,key);
        }
        else if(root->data < key)
        {
            return searchHelper(root->right,key);
        }
    }
    int search(int key)
    {
        return searchHelper(root,key);
    }
int main() {
    insert(5);   // Now calling insert with the value, which creates a Node
    insert(10);
    insert(90);
    insert(87);
    insert(81);
    insert(7);
    cout << "In-order Traversal of the tree: ";
    inOrderTraversal(root);
    cout << endl;
    cout << search(90);
    cout<<endl;
    cout<< search(12);
    return 0;
}
