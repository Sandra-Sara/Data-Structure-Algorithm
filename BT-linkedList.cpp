#include <iostream>
using namespace std;
struct Node {
    int data;
   struct  Node* left;
   struct  Node* right; 
 Node(int val) 
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void inOrderTraversal(struct Node *current) 
{
    if (current == NULL) 
    {
        return;
    }
    inOrderTraversal(current->left);  // Traverse left subtree
    cout << current->data << " ";     // Visit node
    inOrderTraversal(current->right); // Traverse right subtree
}
void preOrderTraversal( struct Node *current) 
{
    if (current == NULL) 
    {
        return;
    }
    cout << current->data << " "; //visit Node
    preOrderTraversal(current->left); //traverse to left 
    preOrderTraversal(current->right); //traverse to right=
}
void postOrderTraversal(struct Node *current) 
{
    if (current == NULL) 
    {
        return;
    }
    postOrderTraversal(current->left);  // Traverse left subtree
    postOrderTraversal(current->right); // Traverse right subtree
    cout << current->data << " ";       // Visit node
}
int main() 
{
    struct Node* current = new Node(1);
    current->left = new Node(2);
    current->right = new Node(3);
    current->left->left = new Node(4);
    current->left->right = new Node(5);
    current->right->right = new Node(6);
    current->right->left = new Node(NULL);
    cout << "In-order Traversal: ";
    inOrderTraversal(current);
    cout << endl;
    cout << "Pre-order Traversal: ";
    preOrderTraversal(current);
    cout << endl;
    cout << "Post-order Traversal: ";
    postOrderTraversal(current);
    cout << endl;
    return 0;
}