#include<iostream>
#include<cstdlib>
using namespace std;
struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};
void traverseToforwardPrint(struct Node *head)
{
    struct Node *current = head;
    cout <<"NULL"<<"->";
    while (current != NULL) {
        cout << current->data << "->";
        current = current->next;
    }
    cout << "NULL" << endl;
}
struct Node *InsertNode(struct Node *head, int data)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
    } else {
        struct Node *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
       // temp->prev = current;
    }
    return head;
}
struct Node *InsertAtFirst(struct Node*head,int data)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = head;
    return temp;
}
struct Node *InsertAtlast(struct Node *head,int data)
{
    struct Node *current = head;
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
 return head;  
}
int main()
{
    struct Node *head = NULL;
    head = InsertNode(head, 12);
    head = InsertNode(head, 19);
    head = InsertNode(head, 29);
    head = InsertAtFirst(head,2023);
    head = InsertAtlast(head,2024);
    traverseToforwardPrint(head);
    return 0;
}
