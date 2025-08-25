#include <iostream>
#include<cstdlib>
using namespace std;
// Node structure for doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;
};
// Function to traverse the list forward (from head to tail)
void traverseForward(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
// Function to traverse the list backward (from tail to head)
void traverseBackward(struct Node *tail) {
    struct  Node *current = tail;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;
}
// Helper function to insert a node at the end of the list
struct Node *append(struct Node* head, int data) {
   struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = temp;
    temp->prev = temp;
    return head;
}
// Function to find and return the last node (tail) of the list
Node* findTail(Node* head) {
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    return temp;
}
// Main function to demonstrate traversal in doubly linked list
int main() {
    Node* head = nullptr;
    // Inserting nodes at the end
    head = append(head, 10);
    head = append(head, 20);
    head = append(head, 30);
    head = append(head, 40);

    // Traversing the list in forward direction
    cout << "Traversal in forward direction: ";
    traverseForward(head);

    // Finding the tail of the list
    Node* tail = findTail(head);

    // Traversing the list in backward direction
    cout << "Traversal in backward direction: ";
    traverseBackward(tail);

    return 0;
}
