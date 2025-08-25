#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
struct Node* ArrayToLinkedList(int array[],int n)
{
    struct Node *head = NULL,*current = NULL,*temp;
    for(int i = 0;i<n;i++)
    {
    temp =(struct Node*)malloc(sizeof(struct Node));
    temp->data =  array[i];
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        current = temp;
    }
    else 
    {
        current->next = temp;
        current = temp;
    }
    }
 return head;
}
void printLinkedList(struct Node *head)
{
    struct Node *current = head;
    while(current != NULL)
    {
        cout<<current->data<<"->";
        current = current->next;
    }
    cout<<"NULL";
}

struct Node* DeleteFirstNode(struct Node *head)
{
    head = head->next;
    return head;
}
struct Node* DeleteLastNode(struct Node *head)
{
    struct Node *current = head;
    while(current->next->next != NULL)
    {
        current = current->next;
    }
    current->next = NULL;
    return head;
}
struct Node *DeleteMiddleNode(struct Node *head,int idx)
{
    struct Node *current = head;
    int count = 0;
    while(current->next != NULL)
    {
        if(count == idx)
        {
         current->next = NULL;
        }
        current = current->next;
        count++;
    }
return head;
}
int main()
{
    int array[5] = {10,20,30,40,50};
    struct Node *linkedList = ArrayToLinkedList(array,5);
    //struct Node *AfterDelete = DeleteFirstNode(linkedList);
    //printLinkedList(AfterDelete);
    //struct Node *Afterdelete = DeleteLastNode(linkedList);
    //printLinkedList(Afterdelete);
    struct Node *afterDelete = DeleteMiddleNode(linkedList);
    printLinkedList(afterDelete);
    return 0;
}
