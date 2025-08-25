#include<iostream>
using namespace std;
#include<cstdlib>
struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *addToEmpty(struct Node *head, int data) {
    head = new Node;
    head->prev = NULL;
    head->data = data;
    head->next = NULL;
    return head;
}
void printLinkedList(struct Node *head) {
    struct Node *current = head;
    cout << "NULL" << "->";
    while (current != NULL) {
        cout << current->data << "->";
        current = current->next;
    }
    cout << "NULL" << endl;
}
struct Node *InsertingAtBeginning(struct Node *head,int x)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    head->next = temp;
    temp->prev = head; 
    temp->data = x;
    temp->next = NULL;
    return head;
}
struct Node *InsertingAtEnd(struct Node *head,int x)
{
    struct Node *current = head;
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    while(current->next != NULL)
    {
       current = current->next;
    }
    temp->prev = current;
    temp->data = x;
    temp->next = NULL;
return head;
}
int main() {
    struct Node *head = NULL;
    struct Node *AfterAdding = addToEmpty(head, 12);
    struct Node *afterAdding = InsertingAtBeginning(AfterAdding,55);
    struct Node *AddingInEnd = InsertingAtEnd(afterAdding,19);
    printLinkedList(AddingInEnd);
    return 0;
}
