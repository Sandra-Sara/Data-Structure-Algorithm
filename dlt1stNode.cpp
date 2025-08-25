#include<iostream>
#include<cstdlib>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
struct Node* arrayTolinkedlist(int array[]);
void printlinkedlist(struct Node *head);
struct Node* deleteHead(struct Node *head);

int main() {
    int array[10] = {12, 19, 2003, 2004, 2022, 2023, 35, 58, 1000, 91};
    
    // Create a linked list from the array
    struct Node *linkedList = arrayTolinkedlist(array);
    
    // Print the original linked list
    cout << "Original Linked List: ";
    printlinkedlist(linkedList);
    
    // Delete the head node
    linkedList = deleteHead(linkedList);
    
    // Print the linked list after deleting the head
    cout << "After Deleting Head: ";
    printlinkedlist(linkedList);
    
    return 0;
}
struct Node* arrayTolinkedlist(int array[]) {
    struct Node *head = NULL, *current = NULL, *temp;
    for(int i = 0; i < 10; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = array[i];
        temp->next = NULL;
        if (head == NULL) {
            head = temp;
            current = temp;
        } else {
            current->next = temp;
            current = temp;
        }
    }
    return head;
}
void printlinkedlist(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "NULL" << endl;
}
struct Node* deleteHead(struct Node *head) {
    if (head == NULL) {
        // If the list is empty, return NULL
        cout << "List is empty!" << endl;
        return NULL;
    }
    struct Node *temp = head;  // Temporarily store the current head
    head = head->next;         // Move head to the next node
    free(temp);                // Free the memory of the old head
    return head;               // Return the new head of the list
}
