#include <iostream>
using namespace std;
#define SIZE 10
struct Node {
    int data;
    struct Node *next;
};
struct Node *arrayToLinkedList(int array[], int size) 
{
    struct Node *head = NULL, *current = NULL, *temp;
    for (int i = 0; i < size; i++) 
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = array[i];
        temp->next = NULL;
        if (head == NULL) 
        {
            head = temp;
            current = temp;
        } else {
            current->next = temp;
            current = temp;
        }
    }
    return head;
}
struct Node  *AddNodeAtBegin(struct Node *head,int data)
{
    struct Node *temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    return temp;
}
struct Node *AddNodeAtLast(struct Node *head,int data)
{
    struct Node *current = head;
    struct Node *temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next  = NULL;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
    return head;
}
struct Node *deleteFromBegin(struct Node *head)
{
    head = head->next;
    return head;
}
struct Node *deleteFromLast(struct Node *head)
{
    struct Node *temp ;
    temp =(struct Node*)malloc(sizeof(struct Node));
    struct Node *current = head;
    while(current->next->next!= NULL)
    {
        current = current->next;
    }
    temp = current->next;
    current->next = NULL;
    free(temp);
    return head;
}
void printLinkedList(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        cout << current->data << "->";
        current = current->next;
    }
    cout <<"NULL"<<endl;
}
int main() {
    int array[SIZE] = {12, 19, 34, 21, 65, 43, 35, 50, 11, 100};
    struct Node *head = arrayToLinkedList(array, SIZE);
    printLinkedList(head);
    // struct Node *Begin = AddNodeAtBegin(head,50);
    //  printLinkedList(Begin);
    //  struct Node *end = AddNodeAtLast(head,2000);
    //   printLinkedList(end);
    // struct Node *deleteBegin = deleteFromBegin(head);
    //  printLinkedList(deleteBegin);
    struct Node *deleteEnd = deleteFromLast(head);
    printLinkedList(deleteEnd);
    return 0;
}
