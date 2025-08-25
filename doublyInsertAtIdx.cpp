#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* pre;
    struct Node* next;
};
// Function to insert a node at any index
struct Node *InsertAtAnyIndx(struct Node *head, int data, int idx) {
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->pre = NULL;
    temp->next = NULL;
    // Case 1: Inserting at the head of the list
    if (idx == 0) {
        temp->next = head;
        if (head != NULL) {
            head->pre = temp;
        }
        return temp;  // new node becomes the head
    }
    struct Node *current = head;
    int count = 0;

    // Traverse the list to find the correct position
    while (current != NULL && count < idx - 1) {
        current = current->next;
        count++;
    }

    // If current is NULL, index is out of bounds
    if (current == NULL || current->next == NULL) {
        printf("Index out of bounds\n");
        return head;
    }

    // Insert the new node between `current` and `current->next`
    temp->next = current->next;
    temp->pre = current;

    if (current->next != NULL) {
        current->next->pre = temp;
    }
    current->next = temp;

    return head;
}

// Utility function to print the list for debugging purposes
void printList(struct Node *node) {
    struct Node *last;
    printf("Forward traversal: ");
    while (node != NULL) {
        printf("%d ", node->data);
        last = node;
        node = node->next;
    }
    printf("\n");
}

int main() {
    // Example usage for testing and debugging
    struct Node *head = NULL;

    // Assume a function InsertAtEnd to create a list for testing
    head = InsertAtAnyIndx(head, 10, 0);  // Insert at head
    head = InsertAtAnyIndx(head, 20, 1);  // Insert at index 1
    head = InsertAtAnyIndx(head, 30, 2);  // Insert at index 2
    head = InsertAtAnyIndx(head, 15, 1);  // Insert at index 1

    // Print the list
    printList(head);

    return 0;
}
