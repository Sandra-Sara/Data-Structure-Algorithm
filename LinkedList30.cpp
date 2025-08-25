#include<iostream>
#include<cstdlib>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
struct Node* arrayToLinkedList(int array[], int n) 
{
    struct Node *head = NULL, *current = NULL, *temp;
    for(int i = 0; i < n; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = array[i];
        temp->next = NULL;
        if(head == NULL) 
        {
            head = temp;
            current = temp;
        } else 
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
    while(current != NULL) {
        cout << current->data << "->";
        current = current->next;
    }
    cout << "NULL" << endl;
}
struct Node *AddNodeAtFirst(struct Node *head,int data)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}
struct Node *AddNodeAtLast(struct Node *head,int data)
{
    struct Node *newNode_ = head;
    newNode_ = (struct Node*)malloc(sizeof(struct Node));
    newNode_->data = data;
    newNode_->next = NULL;
    return newNode_;
}
void *AddNodeAtTheMiddle(struct Node *head,int data,int idx)
{
    struct Node *current = head;
    struct Node *middleNode;
     middleNode = (struct Node*)malloc(sizeof(struct Node));
     int counter = 0;
           while(current != NULL)
           {
            counter++;
            if(counter == idx)
            {
                middleNode->data = data;
                middleNode->next = current->next;
                current->next = middleNode;
            }
            current = current->next;
           }
}
int main() 
{
    int array[6] = {13, 54, 24, 51, 89, 76};
    struct Node *LinkedList = arrayToLinkedList(array, 6);
    printLinkedList(LinkedList);
    struct Node *NewNode = AddNodeAtFirst(LinkedList,12);
    printLinkedList(NewNode);
    struct Node *NewNode_ = AddNodeAtLast(LinkedList,19);
    printLinkedList(NewNode_);
    struct Node *WithMiddleNode = AddNodeAtTheMiddle(LinkedList,2003,4);
    printLinkedList(WithMiddleNode);
    return 0;
}
