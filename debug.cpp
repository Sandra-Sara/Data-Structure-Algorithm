#include <stdio.h>
#include <stdlib.h>
struct Node {
    struct Node *pre;
    int data;
    struct Node *next;
};
struct Node *createalist(struct Node *head, int data) 
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->pre = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}
struct Node *insertatbeg(struct Node *head, int data) 
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->pre = NULL;
    temp->data = data;
    temp->next = head;
    return temp;
}
struct Node *insertatend(struct Node *head, int data) 
{
    struct Node *ptr = head;
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->pre = NULL;
    temp->data = data;
    temp->next = NULL;
    if (head == NULL) 
    {
        return temp; 
    }
    while (ptr->next != NULL) 
    {
        ptr = ptr->next;
    }
    ptr->next = temp;   
    temp->pre = ptr;   
    return head;
}
struct Node *InsertAtAnyIndx(struct Node *head,int data,int idx)
{
    int count = -1;
    struct Node *current = head;
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->pre = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = current->next;
    temp->pre = current;
    if (current->next != NULL) 
    {
        current->next->pre = temp;
    }
    current->next = temp;
    return head;
}
void printLinkedList(struct Node *head) 
{
    struct Node *current = head;
    while (current != NULL) 
    {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL");
    printf("\n");
}
int main() 
{
    struct Node *head = NULL;
    head = createalist(head, 67);
    printLinkedList(head);
    head = insertatbeg(head, 34);
    printLinkedList(head);
    head = insertatend(head, 56);
    printLinkedList(head);
    head = InsertAtAnyIndx(head,29,3);
    printLinkedList(head);
    return 0;
}
